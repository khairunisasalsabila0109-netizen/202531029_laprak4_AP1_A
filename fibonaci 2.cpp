#include <iostream>

using namespace std;

void tampilkanMenu() {
    cout << "\n=== FIBONACCI GENERATOR ===" << endl;
    cout << "1) n suku" << endl;
    cout << "2) sampai <= m" << endl;
    cout << "3) exit" << endl;
    cout << "Pilih: ";
}

int main() {
    int pilihan;

    while (true) {
        tampilkanMenu();
        cin >> pilihan;

        if (pilihan == 1) {
            int n;
            cout << "Masukkan n: ";
            cin >> n;

            if (n <= 0) {
                cout << "Input tidak valid!" << endl;
            } else {
                cout << "\nHasil (" << n << " suku):" << endl;
                long long t1 = 0, t2 = 1, nextTerm = 0;

                for (int i = 1; i <= n; ++i) {
                    if (i == 1) {
                        cout << t1 << " ";
                        continue;
                    }
                    if (i == 2) {
                        cout << t2 << " ";
                        continue;
                    }
                    nextTerm = t1 + t2;
                    t1 = t2;
                    t2 = nextTerm;
                    
                    cout << nextTerm << " ";
                }
                cout << endl;
            }

        } else if (pilihan == 2) {
            int m;
            cout << "Masukkan m: ";
            cin >> m;

            if (m < 0) {
                cout << "Input tidak valid!" << endl;
            } else {
                cout << "\nHasil (<= " << m << "):" << endl;
                long long t1 = 0, t2 = 1, nextTerm = 0;

                // Tampilkan angka pertama jika m >= 0
                cout << t1 << " ";
                
                // Hitung suku berikutnya
                nextTerm = t1 + t2;

                while (nextTerm <= m) {
                    cout << nextTerm << " ";
                    t1 = t2;
                    t2 = nextTerm;
                    nextTerm = t1 + t2;
                }
                cout << endl;
            }

        } else if (pilihan == 3) {
            cout << "Keluar dari program..." << endl;
            break;
        } else {
            cout << "Pilihan tidak tersedia." << endl;
        }
    }

    return 0;
}
