#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;

cpp_int factorial(int n) {
    cpp_int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers!" << endl;
    } else {
        cpp_int fact = factorial(num);
        cout << "Factorial of " << num << " is:\n" << fact << endl;
    }

    return 0;
}
