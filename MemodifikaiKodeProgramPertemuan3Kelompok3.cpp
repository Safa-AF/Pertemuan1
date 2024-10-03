//  Anggota Kelompok : Gezza azka Fadhilah, R Aryasatya AMD, Safaraz Akma Fadhil, Syabil Arkan Dhiya Kavi

#include <iostream>

using namespace std;

int main() {

    int b = 0, i = 0;

    do {
    cout << "Masukan jumlah buku : ";
    cin >> i;

    if (i%2 == 1) {
        cout << "Memasukan " << i << " buku" << endl << endl;
        b += i;
    }
    else {
        cout << "Buku yang dimasukkan tidak berjumlah ganjil!\nCoba lagi!\n\n";
    }

    if (b > 30) {
        cout << "Buku yang dimasukkan terlalu banyak\nBuku yang bisa dimasukan adalah " << i+(30-b) << " surat\n\n";
        b -= i;
        }

    else {
    cout << "Jumlah Buku " << b << "\n============\n";
        }

    }while (b < 30);

    cout << "Lemari Buku telah penuh\n";
    return 0;
}
