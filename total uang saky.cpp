#include <iostream>

using namespace std;

int main() {
    // Input the number of days
    int numDays;
    cout << "Masukkan jumlah hari: ";
    cin >> numDays;

    // Variable to store the total pocket money
    int totalPocketMoney = 0;

    // Input the pocket money for each day and calculate the total
    for (int i = 1; i <= numDays; i++) {
        int pocketMoney;
        cout << "Uang saku hari ke-" << i << ": ";
        cin >> pocketMoney;
        totalPocketMoney += pocketMoney;
    }

    // Display the total pocket money
    cout << "Total: " << totalPocketMoney << endl;

    return 0;
}
