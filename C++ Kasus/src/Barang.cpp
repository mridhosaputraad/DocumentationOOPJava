#include "myclass/Barang.h"
#include <iostream>

Barang::Barang(std::string inputNama, int inputHarga, int inputStok)
{
	this->namaBarang = inputNama;
	this->hargaBarang = inputHarga;
	this->stokBarang = inputStok;
}

void Barang::tambahBarang()
{
	stokBarang += 1;
	std::cout << "Stok berhasil ditambahkan menjadi : " << stokBarang << std::endl;
}

void Barang::tambahBarang(int jmlTambah)
{
	stokBarang += jmlTambah;
	std::cout << "Stok berhasil ditambahkan menjadi : " << stokBarang << std::endl;
}

void Barang::kurangBarang()
{
	stokBarang -= 1;
	std::cout << "Stok berhasil dikurangkan menjadi : " << stokBarang << std::endl;
}

void Barang::kurangBarang(int jmlKurang)
{
	stokBarang -= jmlKurang;
	std::cout << "Stok berhasil dikurangkan menjadi : " << stokBarang << std::endl;
}

bool Barang::cekBarang()
{
	if (stokBarang > 0)
		return true;
	else
		return false;
}

bool Barang::cekBarang(bool status)
{
	if (status)
	{
		if (stokBarang > 0)
			return true;
		else
			return false;
	}
	else
	{
		if (stokBarang > 0)
			return false;
		else
			return true;
	}
}

void Barang::infoBarang()
{
	std::cout << "Nama Barang : " << this->namaBarang << ", Harga Barang : Rp." << this->hargaBarang << ", Stok Barang : " << this->stokBarang;
}

void Barang::setNamaBarang(std::string namaBarang)
{
	this->namaBarang = namaBarang;
}

void Barang::setHargaBarang(int hargaBarang)
{
	this->hargaBarang = hargaBarang;
}

void Barang::setStokBarang(int stokBarang)
{
	this->stokBarang = stokBarang;
}

std::string Barang::getNamaBarang()
{
	return this->namaBarang;
}

int Barang::getHargaBarang()
{
	return this->hargaBarang;
}

int Barang::getStokBarang()
{
	return this->stokBarang;
}