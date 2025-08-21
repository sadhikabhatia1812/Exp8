#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter number of rows: (put space between numbers) : ";
    cin >> r;
    cout << "Enter number of columns: (put space between numbers) : ";
    cin >> c;

    if (r < 2) {
        cout << "Matrix must have at least 2 rows to compare.";
        return 0;
    }

    int a[10][10];

    cout << "Enter elements of matrix: (put space between numbers)\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Comparing first row with second row: \n";
    for (int j = 0; j < c; j++) {
        if (a[0][j] == a[1][j]) {
            cout << "Column " << j + 1 << ": Equal (" << a[0][j] << ")\n";
        } else {
            cout << "Column " << j + 1 << ": Not Equal (" << a[0][j] << " vs " << a[1][j] << ")\n";
        }
    }

    return 0;
}
