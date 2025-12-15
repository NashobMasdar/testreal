#include <iostream>

using namespace std;

int main()
{
	double harga, diskon, jumlahdiskon, hargadiskon;

	cout << "Selamat Datang di Toko Unisba BLitar" << endl;
	cout << "======================================\n" << endl;
	cout << "Silahkan Masukkan :\n";
	cout << "\033[33mHarga barang (Rp) = \033[0m";
	cin >> harga;

	cout << "\033[33mDiskon barang (%) = \033[0m";
	cin >> diskon;

	jumlahdiskon = harga * (diskon / 100);
	hargadiskon = harga - jumlahdiskon;

	cout << endl;
	cout << "\033[32mJumlah diskon \t\t= \033[0m" << "Rp. " << jumlahdiskon << endl;
	cout << "\033[32mHarga Setelah Diskon \t= \033[0m" << "Rp. " << hargadiskon << endl;

	return 0;
}

