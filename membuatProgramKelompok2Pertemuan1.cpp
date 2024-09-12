#include <iostream>

using namespace std;

int main() {

    int i, n, t = 0;

    cout << "masukkan banyak nilai: ";
    cin >> n;
    n *= 2;

    cout << endl;

    for (i = 2; i <= n; i += 2) {
            cout << i << " ";
            t += i;
    }

    cout << "\nJumlah : " << t << endl;
    return 0;
}
