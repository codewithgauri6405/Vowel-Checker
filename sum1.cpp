#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;

    // Prompt user for input
    cout << "Enter a number: ";
    cin >> number;

    // Calculate the sum of the digits
    while (number != 0) {
        sum += number % 10;  // Add the last digit to sum
        number /= 10;        // Remove the last digit from number
    }

    // Print the result
    cout << "The sum of the digits is: " << sum << endl;

    return 0;
}
