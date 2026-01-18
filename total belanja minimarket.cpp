#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Vector to store item prices
    vector<int> prices;
    // Variable to store the item price entered by the cashier
    int price;
    // Variable to store the total price
    int totalPrice = 0;
    // Variable to store the number of items
    int itemCount = 0;

    // Input item prices until the cashier enters 0
    cout << "Masukkan harga barang (0 untuk selesai):" << endl;
    do {
        cout << "Harga: ";
        cin >> price;

        if (price != 0) {
            prices.push_back(price);
            totalPrice += price;
            itemCount++;
        }
    } while (price != 0);

    // Calculate the discount
    double discount = 0.0;
    if (totalPrice >= 100000) {
        discount = 0.1 * totalPrice;
    }

    // Calculate the total amount to pay
    double totalPay = totalPrice - discount;

    // Display the results
    cout << "Jumlah barang: " << itemCount << endl;
    cout << "Total sebelum diskon: " << totalPrice << endl;
    cout << "Diskon: " << discount << endl;
    cout << "Total bayar: " << totalPay << endl;

    return 0;
}







