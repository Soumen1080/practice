#include<iostream>
using namespace std;
// Function to calculate the sum of two integers
void sum(int a, int b = 0){ // a is a required parameter, b is optional with default value 0

    int result = a + b;
    cout << "The sum is: " << result << endl;


}

int main()
{

sum(554,555); //554 and 555 are passed as arguments to the function

cout << "Another prosecss of function in cpp"<<endl;
sum(554); //554 is passed as an argument, b will take the default value 0
return 0;


}