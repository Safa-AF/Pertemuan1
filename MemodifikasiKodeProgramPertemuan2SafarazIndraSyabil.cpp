//  Anggota Kelompok : Safaraz Akma Fadhil, Indra Jati Kusumah, Syabil Arkan Dhiya Kavi

#include <iostream>

using namespace std;

int main() {

    float i = 1, jumlah = 0, N;

    cout << "Masukan banyak nilai : ";
    cin >> N;

    cout << "Jumlah : ";
    while (i < N) {
        cout << i * 7 << " + ";
        jumlah = jumlah + (i * 7);
        i++;
    }

    jumlah = jumlah + (i * 7);
    cout << i * 7;
    cout << " = " << jumlah << endl;

    float rerata = jumlah / N;
    cout << "Rerata : " << jumlah << " / " << N;
    cout << " = " << rerata << endl;

    return 0;
}
