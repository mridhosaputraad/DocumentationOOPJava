package com.myclass;

public class Penjual extends User {
    private int lamaKerjaPerTahun;

    public String displayUser() {
        return "ini Penjual";
    }

    public Penjual(String nama, int umur, String jenisKelamin, int lamaKerjaPerTahun) {
        super(nama, umur, jenisKelamin);
        this.lamaKerjaPerTahun = lamaKerjaPerTahun;
    }

    public void infoPenjual() {
        super.info();
        System.out.println(", Lama Kerja Per Tahun : " + this.lamaKerjaPerTahun + " Tahun.\n");
    }

    public void setLamaKerjaPerTahunPenjual(int lamaKerjaPerTahun) {
        this.lamaKerjaPerTahun = lamaKerjaPerTahun;
    }

    public int getLamaKerjaPerTahunPenjual() {
        return this.lamaKerjaPerTahun;
    }
}
