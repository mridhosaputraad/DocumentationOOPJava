package com.program;

class Player {
    private String name;
    private int health, incHealth, attack, incAttack, level, damage;
    private boolean isAlive;
    private Armor armor;
    private Weapon weapon;

    public Player(String name) {
        this.name = name;
        this.health = 100;
        this.attack = 100;
        this.level = 1;
        this.incHealth = 20;
        this.incAttack = 20;
        this.isAlive = true;
    }

    public void display() {
        System.out.println("Player\t\t: " + this.name);
        System.out.println("Level\t\t: " + this.level);
        System.out.println("Max Health\t: " + this.getHealth() + "/" + this.maxHealth());
        System.out.println("Attack\t\t: " + this.getPowerAttack());
        System.out.println("Alive\t\t: " + this.isAlive + "\n");
    }

    public void attack(Player opponent) {
        int damage = this.getPowerAttack();
        System.out.println(this.name + " is attacking " + opponent.getName() + " with " + damage);
        opponent.defence(damage);
        this.levelUp();
    }

    public void defence(int damage) {
        int defence = this.armor.getDefence();
        System.out.println(this.name + " defence power = " + defence);
        if (damage > defence)
            damage -= defence;
        else
            damage = 0;
        System.out.println("damage earned = " + damage + "\n");
        this.damage += damage;
        if (this.getHealth() <= 0) {
            this.isAlive = false;
            this.damage = this.maxHealth();
        }
        this.display();
    }

    private int getPowerAttack() {
        return this.attack + (this.level * this.incAttack) + this.weapon.getPower();
    }

    private void levelUp() {
        this.level++;
    }

    public int maxHealth() {
        return this.health + (this.level * this.incHealth) + this.armor.getStrength();
    }

    public void setArmor(Armor armor) {
        this.armor = armor;
    }

    public void setWeapon(Weapon weapon) {
        this.weapon = weapon;
    }

    public String getName() {
        return this.name;
    }

    public int getHealth() {
        return this.maxHealth() - this.damage;
    }
}

class Weapon {
    private String name;
    private int power;

    public Weapon(String name, int power) {
        this.name = name;
        this.power = power;
    }

    public int getPower() {
        return this.power;
    }
}

class Armor {
    private String name;
    private int strength, health;

    public Armor(String name, int strength, int health) {
        this.name = name;
        this.strength = strength;
        this.health = health;
    }

    public int getStrength() {
        return (this.strength * 10) + this.health;
    }

    public int getDefence() {
        return this.strength * 2;
    }
}

public class Main {
    public static void main(String[] args) {
        Player player1 = new Player("Chronus");
        Armor armor1 = new Armor("Kabuto", 5, 100);
        Weapon weapon1 = new Weapon("Katana", 10);
        player1.setArmor(armor1);
        player1.setWeapon(weapon1);

        Player player2 = new Player("Nemesis");
        Armor armor2 = new Armor("Steal", 1, 40);
        Weapon weapon2 = new Weapon("Belati", 40);
        player2.setArmor(armor2);
        player2.setWeapon(weapon2);

        player1.display();
        player2.display();

        player1.attack(player2);
        player1.attack(player2);
        // player2.attack(player1);
        // player2.attack(player1);

    }
}
