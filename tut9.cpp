#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Loop to print the equilateral triangle pattern
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
