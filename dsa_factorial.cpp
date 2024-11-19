#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;
    // Iterate from 1 to n and multiply all values
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Check for negative input (factorial is undefined for negative numbers)
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << num << " is " << factorial(num) << endl;
    }

    return 0;
}
