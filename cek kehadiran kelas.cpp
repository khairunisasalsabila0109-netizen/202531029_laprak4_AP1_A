#include <iostream>
#include <vector>
#include <iomanip> // Required for setting precision

using namespace std;

int main() {
    // Input the number of students
    int numStudents;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> numStudents;

    // Vector to store attendance data (1=present, 0=absent)
    vector<int> attendance(numStudents);

    // Input attendance data for each student
    for (int i = 0; i < numStudents; i++) {
        cout << "Mahasiswa " << i + 1 << " (1=hadir, 0=tidak): ";
        cin >> attendance[i];
    }

    // Calculate the number of present and absent students
    int presentCount = 0;
    int absentCount = 0;
    for (int i = 0; i < numStudents; i++) {
        if (attendance[i] == 1) {
            presentCount++;
        } else {
            absentCount++;
        }
    }

    // Calculate the percentage of present students
    double presentPercentage = (double)presentCount / numStudents * 100.0;

    // Display the results
    cout << "Hadir: " << presentCount << endl;
    cout << "Tidak hadir: " << absentCount << endl;
    cout << fixed << setprecision(2); // Set precision to 2 decimal places
    cout << "Persentase hadir: " << presentPercentage << "%" << endl;

    return 0;
}
