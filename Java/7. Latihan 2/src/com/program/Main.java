package com.program;

// Player
class Player {
    String name;
    double health;
    int level;

    // object member
    Weapon weapon;
    Armor armor;

    Player(String name, double health) {
        this.name = name;
        this.health = health;
    }

    void attack(Player opponent) {
        double attackPower = this.weapon.power;
        System.out.println(this.name + " attacking " + opponent.name + " with power " + attackPower);
        opponent.defence(attackPower);
    }

    void defence(double attackPower) {
        double damage;
        if (this.armor.defence < attackPower) {
            damage = attackPower - this.armor.defence;
        } else {
            damage = 0;
        }
        this.health -= damage;
        System.out.println(this.name + " gets damage " + damage);
    }

    void equipWeapon(Weapon weapon) {
        this.weapon = weapon;
    }

    void equipArmor(Armor armor) {
        this.armor = armor;
    }

    void show() {
        System.out.println("Name : " + this.name + " , health : " + this.health + " hp");
        this.weapon.show();
        this.armor.show();
    }
}

// Senjata
class Weapon {
    double power;
    String name;

    Weapon(String name, double attackPower) {
        this.name = name;
        this.power = attackPower;
    }

    void show() {
        System.out.println("Weapon : " + this.name + " , power : " + this.power);
    }

}

// Armor
class Armor {
    double defence;
    String name;

    Armor(String name, double defencePower) {
        this.name = name;
        this.defence = defencePower;
    }

    void show() {
        System.out.println("Armor : " + this.name + " , defence : " + this.defence + "\n");
    }
}

public class Main {
    public static void main(String[] args) {
        // Membuat object player
        Player player1 = new Player("ucup", 100);
        Player player2 = new Player("Hobs", 100);

        // Membuat object weapon
        Weapon pedang = new Weapon("pedang", 15);
        Weapon katana = new Weapon("katana", 20);

        // Membuat object armor
        Armor bajuBesi = new Armor("Baju Besi", 15);
        Armor kabuto = new Armor("Kabuto", 10);

        // equip senjata dan armor
        player1.equipWeapon(pedang);
        player1.equipArmor(bajuBesi);
        player1.show();

        player2.equipWeapon(katana);
        player2.equipArmor(kabuto);
        player2.show();

        System.out.println("\nPERTEMPURAN");
        player1.attack(player2);
        player1.show();
        player2.show();

        player2.attack(player1);
        player1.show();
        player2.show();

    }
}
