package com.program;

class Player {
    String name; // default
    public int exp;
    private int health;

    Player(String name, int exp, int health) {
        this.name = name;
        this.exp = exp;
        this.health = health;
    }

    // default access modifier
    void display() {
        tambahExp();
        System.out.println("\nName\t:" + this.name);
        System.out.println("exp\t:" + this.exp);
        System.out.println("health\t:" + this.health);
    }

    public void ubahNama(String name) {
        this.name = name;
    }

    private void tambahExp() {
        this.exp += 100;
    }

}

public class Main {
    public static void main(String[] args) {
        Player player1 = new Player("Ucup", 0, 100);
        System.out.println(player1.name);
        player1.name = "kiki";
        System.out.println(player1.name);

        System.out.println(player1.exp);
        player1.exp = 1;
        System.out.println(player1.exp);

        player1.display();
        player1.ubahNama("tadai");
        player1.display();

    }
}
