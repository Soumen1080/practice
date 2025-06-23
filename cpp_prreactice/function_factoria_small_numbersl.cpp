#include<iostream>
using namespace std;

//factorial of n numbers using recursion
int factorial(int n){

    if(n <= 1) // base case
        return 1;
    else
        return n * factorial(n - 1); // recursive call


}

int main() {
    int number;
    cout << "Enter a positive integer (number > 10) : ";
    cin >> number;
if ( number > 10) {
        cout << "Number is too large, please enter a number less than or equal to 10." << endl;
        return 1; // Exit the program if the number is too large
    }
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int result = factorial(number);
        cout << "Factorial of " << number << " is: " << result << endl;
    }

    return 0;
}