package com.man;

class Mahasiswa {
    // Data member
    String nama, NIM;

    // Constructor
    Mahasiswa(String inputNama, String inputNIM) {
        this.nama = inputNama;
        this.NIM = inputNIM;
    }

    // Method tanpa return dan parameter
    void show() {
        System.out.println("Nama : " + this.nama + "NIM : " + this.NIM);
    }

    // Method tanpa return dengan paramater
    void setNama(String nama) {
        this.nama = nama;
    }

    // Method dengan return
    String getNama() {
        return this.nama;
    }

    // Method dengan return dan parameter
    String userId(String message) {
        return message + " Juga, nama saya adalah " + this.nama;
    }
}

class Dosen {
    String nama;

    Dosen(String nama) {
        this.nama = nama;
    }
}

public class Main {
    public static void main(String[] args) {
        Mahasiswa mahasiswa = new Mahasiswa("lala", "12355");
        // Method
        mahasiswa.show();
        mahasiswa.setNama("Jajan");
        mahasiswa.show();

        System.out.println(mahasiswa.getNama());

        String data = mahasiswa.userId("halo");
        System.out.println(data);

        Dosen dosen1 = new Dosen("lala");
    }
}
