//  Anggota Kelompok : Safaraz Akma Fadhil, Indra Jati Kusumah, Syabil Arkan Dhiya Kavi

#include <iostream>

using namespace std;

int main() {

    int n, jumlah = 0;

    cout << "masukkan bilangan : ";
    cin >> n;
    jumlah += n;

    while (n > 0) {
        cout << n << " - ";
        if (n%2 == 1) {
            n -= 1;
        }
        else {
        n -= 2;
        }
        jumlah -= n;
    }

    cout << n << " = " << jumlah << endl;
    return 0;
}
