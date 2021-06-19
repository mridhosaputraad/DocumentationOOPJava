package com.main;

class Mahasiswa {
    String nama, NIM, jurusan;

    // constructor dipanggil saat object pertama kali dibuat
    // Mahasiswa(){
    // System.out.println("Ini adalah constructor");
    // }

    // constructor dengan parameter
    Mahasiswa(String inputNama, String inputNIM, String inputJurusan) {
        nama = inputNama;
        NIM = inputNIM;
        jurusan = inputJurusan;

        System.out.println(nama);
        System.out.println(NIM);
        System.out.println(jurusan);
    }
}

public class Main {
    public static void main(String[] args) {
        Mahasiswa mahasiswa1 = new Mahasiswa("kiki", "12433", "kimi");
    }
}
