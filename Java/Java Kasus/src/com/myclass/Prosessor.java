package com.myclass;

public class Prosessor extends Barang {
    private double frekuensiDasar, turboBoost;

    public String displayBarang() {
        return "Ini Processor";
    }

    public Prosessor(String namaBarang, int hargaBarang, int stokBarang, double frekuensiDasar, double turboBoost) {
        super(namaBarang, hargaBarang, stokBarang);
        this.frekuensiDasar = frekuensiDasar;
        this.turboBoost = turboBoost;
    }

    public void setFrekuensiDasar(double frekuensiDasar) {
        this.frekuensiDasar = frekuensiDasar;
    }

    public void setTurboBoost(double turboBoost) {
        this.turboBoost = turboBoost;
    }

    public double getFrekuensiDasar() {
        return this.frekuensiDasar;
    }

    public double getTurboBoost() {
        return this.turboBoost;
    }

    @Override
    public void infoBarang() {
        super.infoBarang();
        System.out.println("Frekuensi Dasar : " + this.frekuensiDasar + ", Turbo Boost : " + this.turboBoost + "\n");
    }
}
