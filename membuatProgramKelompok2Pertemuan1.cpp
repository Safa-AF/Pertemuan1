#include <iostream>

using namespace std;

int main() {

    int i, n, a, t = 0;

    cout << "masukkan banyak nilai: ";
    cin >> n;
    cout << endl;

    for (i = 1; i <= n; i++) {
            cout << "masukkan nilai ke-"<< i << " : ";\
            cin >> a;
            t += a;
    }

    cout << "\nJumlahnya adalah : " << t << endl;
    return 0;
}
