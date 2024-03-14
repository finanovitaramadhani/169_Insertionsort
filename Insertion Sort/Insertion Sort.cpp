// Insertion Sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[20];			// Membuat Array dengan panjang data 20
int n;					// Membuat Variable inputan n

void input() {		// Proceddure Input
	while (true)
	{
		cout << "Masukkan Jumlah Data pada Array : ";		// Membuat Inputan jumlah element Array
		cin >> n;											// Memanggil variable inputan n

		if (n <= 20) {										// Membuat Kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang anda masukkan minimal 20 Elemen.\n";		// Menampilkan Pesan jika data lebih dari 20
		}
	}
	cout << endl;									// Membuat jarak per baris program
	cout << "========================" << endl;		// Membuat tampilan susunan data elemen array
	cout << "Memasukkan Element Array" << endl;
	cout << "========================" << endl;

	
	for (int i = 0; i < n; i++)						// Menggunakan perulangan for untuk menyimpan data pada array
	{
		cout << "Data ke-" << (i + 1) << ": ";		// Memasukkan atau menginputkan nilai data ke-n
		cin >> arr[i];								// Menyimpan nilai data ke-n kedalam array arr
	}
}
