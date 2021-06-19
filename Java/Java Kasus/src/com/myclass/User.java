package com.myclass;

abstract class User {
    private String nama, jenisKelamin;
    private int umur;

    public abstract String displayUser();

    User() {
    }

    protected User(String nama, int umur, String jenisKelamin) {
        this.nama = nama;
        this.umur = umur;
        this.jenisKelamin = jenisKelamin;
    }

    public void info() {
        System.out.print("Nama : " + this.nama + ", Umur : " + this.umur + ", Jenis Kelamin : " + this.jenisKelamin);
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public void setUmur(int umur) {
        this.umur = umur;
    }

    public void setJenisKelamin(String jenisKelamin) {
        this.jenisKelamin = jenisKelamin;
    }

    public String getNama() {
        return this.nama;
    }

    public int getUmur() {
        return this.umur;
    }

    public String getJenisKelamin() {
        return this.jenisKelamin;
    }
}
