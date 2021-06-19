package com.program;

// membuat class sebagai template
class Mahasiswa {
    String nama, NIM, jurusan;
    double IPK;
    int umur;
}

public class Main {
    public static void main(String[] args) {
        // instansiasi / membuat object
        Mahasiswa mahasiswa1 = new Mahasiswa();
        mahasiswa1.nama = "ucup";

        System.out.println(mahasiswa1.nama);
    }
}
