//1. Karena algoritma membantu dalam menulis program yang sesuai, membantu dalam menyelesaikan masalah yang sulit menjadi serangkaian masalah kecil yang dapat dipecahkan, dan dapat menjadikan pengambilan keputusan sebagai proses yang lebih rasional
//2. Statis dan dinamis. Contoh statis adalah array dan  contoh dinamis adalah linked list
//3. Kecepatan mesin, Penyusun, Sistem operasi, Bahasa pemrograman, Ukuran input
//4. Algoritma quicksort. 
//5. Quadratic : Bubble sort, Selection sort, Insertion sort, Selection sort, Shell sort. Loglinear : Quicksort dan Mergesort

#include <iostream>
using namespace std;

int DA[99];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
	while (true) {
		cout << "Masukkan panjang element array :";
		cin >> n;

		if (n <= 99)
			break;
		else
			cout << "\n========================";
			cout << "\nMaksimum panjang array adalah 99";
			cout << "\n========================" << endl;
			cout << endl;
	}


	for (int i = 0; i < n; i++) {
		cout << (i + 1) << " :";
		cin >> DA[i];

	}
