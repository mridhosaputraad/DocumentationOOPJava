package com.myclass;

abstract class Barang {
    private String namaBarang;
    private int hargaBarang, stokBarang;

    public abstract String displayBarang();

    Barang() {
    }

    protected Barang(String namaBarang, int hargaBarang, int stokBarang) {
        this.namaBarang = namaBarang;
        this.hargaBarang = hargaBarang;
        this.stokBarang = stokBarang;
    }

    protected void tambahStok() {
        this.stokBarang += 1;
        System.out.println("Stok barang berhasil ditambahkan menjadi : " + this.stokBarang + "\n");
    }

    protected void tambahStok(int jmlTambah) {
        this.stokBarang += jmlTambah;
        System.out.println("Stok barang berhasil ditambahkan menjadi : " + this.stokBarang + "\n");
    }

    protected void kurangStok() {
        this.stokBarang -= 1;
        System.out.println("Stok barang berhasil dikurangkankan menjadi : " + this.stokBarang + "\n");
    }

    protected void kurangStok(int jmlKurang) {
        this.stokBarang -= jmlKurang;
        System.out.println("Stok barang berhasil dikurangkankan menjadi : " + this.stokBarang + "\n");
    }

    protected boolean stokBarang() {
        if (this.stokBarang > 0)
            return true;
        else
            return false;
    }

    protected boolean stokBarang(boolean status) {
        if (status) {
            if (this.stokBarang > 0)
                return true;
            else
                return false;
        } else {
            if (this.stokBarang < 0)
                return false;
            else
                return true;
        }
    }

    protected void infoBarang() {
        System.out.print("Nama Barang : " + this.namaBarang + ", Harga Barang : Rp." + this.hargaBarang
                + ", Stok Barang : " + this.stokBarang + " pcs, ");
    }

    public void setNamaBarang(String namaBarang) {
        this.namaBarang = namaBarang;
    }

    public void setHargaBarang(int hargaBarang) {
        this.hargaBarang = hargaBarang;
    }

    public void setStokBarang(int stokBarang) {
        this.stokBarang = stokBarang;
    }

    public String getNamaBarang() {
        return this.namaBarang;
    }

    public int getHargaBarang() {
        return this.hargaBarang;
    }

    public int getStokBarang() {
        return this.stokBarang;
    }
}
