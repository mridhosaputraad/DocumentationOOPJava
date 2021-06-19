package com.myclass;

public class Keyboard extends Barang {
    private String backlight, tipeSwitch;
    private int banyakKeys;

    public String displayBarang() {
        return "ini Keyboard";
    }

    public Keyboard(String namaBarang, int hargaBarang, int stokBarang, String backlight, int banyakKeys,
            String tipeSwitch) {
        super(namaBarang, hargaBarang, stokBarang);
        this.backlight = backlight;
        this.banyakKeys = banyakKeys;
        this.tipeSwitch = tipeSwitch;
    }

    public void setBacklight(String backlight) {
        this.backlight = backlight;
    }

    public void setBanyakKeys(int banyakKeys) {
        this.banyakKeys = banyakKeys;
    }

    public void setTipeSwitch(String tipeSwitch) {
        this.tipeSwitch = tipeSwitch;
    }

    public String getBacklight() {
        return this.backlight;
    }

    public int getBanyakKeys() {
        return this.banyakKeys;
    }

    public String getTipeSwitch() {
        return this.tipeSwitch;
    }

    @Override
    public void infoBarang() {
        super.infoBarang();
        System.out.println("Backlight : " + this.backlight + ", Banyak keys : " + this.banyakKeys + ", Tipe Switch : "
                + this.tipeSwitch + "\n");
    }
}
