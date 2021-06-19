package com.program;

class Data {
    public int intPublic;
    private int intPrivate;
    private double doublePrivate;

    public Data() {
        this.intPublic = 0;
        this.intPrivate = 10;
    }

    void display() {
        System.out.println(this.intPublic);
        System.out.println(this.intPrivate);
        System.out.println(this.doublePrivate);
    }

    public int getIntPrivate() {
        return this.intPrivate;
    }

    public void setDoublePrivate(double value) {
        this.doublePrivate = value;
    }
}

class Lingkaran {
    private double diameter;;

    Lingkaran(double diameter) {
        this.diameter = diameter;
    }

    public void setJari2(double jari2) {
        this.diameter = jari2 * 2;
    }

    public double getJari2() {
        return this.diameter / 2;
    }

    public double getLuas() {
        return 3.14 * diameter * diameter / 4;
    }
}

public class Main {
    public static void main(String[] args) {
        Data object = new Data();
        object.intPublic = 10;
        System.out.println(object.intPublic);

        // read only
        int angka = object.getIntPrivate();
        System.out.println("getter : " + angka);

        // write only
        object.setDoublePrivate(0.05);
        object.display();

        // gabungkan read dan write dengan setter dan getter
        Lingkaran object2 = new Lingkaran(5);
        System.out.println(object2.getJari2());
        object2.setJari2(14);
        System.out.println(object2.getJari2());
        System.out.println(object2.getLuas());

    }
}
