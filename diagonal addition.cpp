#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: (put space between numbers) \n";
    cin >> n;

    int a[10][10], sum = 0;

    cout << "Enter elements of matrix: (put space between numbers)\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        sum += a[i][i];
    }

    cout << "Sum of main diagonal elements = " << sum;

    return 0;
}
