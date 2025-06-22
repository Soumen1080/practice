#include <iostream>
using namespace std;

void printPattern(int n)
{
    for (int line_no = 1; line_no <= n; line_no++) {
        for (int current_star = 0; current_star < line_no; current_star++) {
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
   
    cout << "Enter the number of terms: ";
    int n;

    cin >> n;
    printPattern(n);
   return 0;
}   
