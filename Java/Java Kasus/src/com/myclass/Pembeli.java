package com.myclass;

public class Pembeli extends User {
    private String noTelp, alamat;

    public String displayUser() {
        return "Ini Pembeli";
    }

    public Pembeli(String nama, int umur, String jenisKelamin, String noTelp, String alamat) {
        super(nama, umur, jenisKelamin);
        this.noTelp = noTelp;
        this.alamat = alamat;
    }

    public void infoPembeli() {
        super.info();
        System.out.println(", No Telepon : " + this.noTelp + ", Alamat : " + this.alamat + ".\n");
    }

    public void setNoTelpPembeli(String noTelp) {
        this.noTelp = noTelp;
    }

    public void setAlamatPembeli(String alamat) {
        this.alamat = alamat;
    }

    public String getNoTelpPembeli() {
        return this.noTelp;
    }

    public String getAlamatPembeli() {
        return this.alamat;
    }

}
