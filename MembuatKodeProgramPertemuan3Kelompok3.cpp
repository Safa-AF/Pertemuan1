//  Anggota Kelompok : Gezza azka Fadhilah, R Aryasatya AMD, Safaraz Akma Fadhil, Syabil Arkan Dhiya Kavi

#include <iostream>

using namespace std;

int main() {

    int k = 0, i = 0;

    do {
    cout << "Masukan Kertas : ";
    cin >> i;

    if (i < 10) {
       cout << "Kertas yang dimasukkan kurang " << 10 - i << "\nCoba lagi!\n";
    }

    else if (i > 10) {
       cout << "Kertas yang dimasukkan lebih " << i - 10 << "\nCoba lagi!\n";
    }

    else {
        k += i;
    }

    cout << "\nJumlah Kertas " << k << "\n==================\n\n";

    }while (k < 50);

    cout << "PENYIMPANAN KERTAS TELAH PENUH!\n";
    return 0;
}
