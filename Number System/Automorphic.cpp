#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int square = num * num;

    // find modulus value (10^number_of_digits)
    int mod = 1, temp = num;
    while (temp > 0) {
        mod *= 10;
        temp /= 10;
    }

    // check if square ends with num
    if (square % mod == num)
        cout << num << " is an Automorphic number." << endl;
    else
        cout << num << " is NOT an Automorphic number." << endl;

    return 0;
}
