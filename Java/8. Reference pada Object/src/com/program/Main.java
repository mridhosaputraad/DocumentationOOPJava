package com.program;

class Buku {
    String judul, penulis;

    Buku(String judul, String penulis) {
        this.judul = judul;
        this.penulis = penulis;
    }

    void display() {
        System.out.println("\nJudul : " + this.judul);
        System.out.println("Penulis : " + this.penulis);
    }
}

public class Main {
    public static void main(String[] args) {
        Buku buku1 = new Buku("Belajar ngoding", "Kang faqih");
        buku1.display();

        // menampilkan address
        String addressBuku1 = Integer.toHexString(System.identityHashCode(buku1));
        System.out.println(addressBuku1);

        // hati hati saat melalkukan assignment dan passing by reference
    }
}
