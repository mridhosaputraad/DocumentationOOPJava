package com.program;

import com.myclass.*;

public class Main {
    public static void main(String[] args) {
        Keyboard keyboard1 = new Keyboard("Vortex Red", 750000, 50, "RGB", 87, "Blue");
        keyboard1.infoBarang();

        Prosessor prosessor1 = new Prosessor("Amd Rayzen", 2700000, 24, 3.6, 4.2);
        prosessor1.infoBarang();

        Penjual penjual1 = new Penjual("Ucup", 21, "Laki-laki", 2);
        penjual1.infoPenjual();

        Pembeli pembeli1 = new Pembeli("Katty", 22, "Perempuan", "235522", "Jalan Kenanga");
        pembeli1.infoPembeli();

        Transaksi transaksi1 = new Transaksi(penjual1, pembeli1, keyboard1);
        System.out.println(keyboard1.getStokBarang());
    }
}
