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
        System.out.println("Armor : " + this.name + " , defence : " + this.defence);
    }
}

public class Main {
    public static void main(String[] args) {
        // Membuat object player
        Player player1 = new Player("ucup", 100);

        // Membuat object weapon
        Weapon pedang = new Weapon("katana", 15);

        // Membuat object armor
        Armor bajubesi = new Armor("Baju Besi", 10);

        // equip senjata dan armor
        player1.equipWeapon(pedang);
        player1.equipArmor(bajubesi);
        player1.show();
    }
}
