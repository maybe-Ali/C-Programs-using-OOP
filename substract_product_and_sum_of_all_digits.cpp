// Code Working:
// User Input n=498 ;
// product of digits = 4 * 9 * 8 ;
// sum of digits = 4 + 9 + 8;
// substract the sum from product results and Display it.
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int last_digit;
    int prod = 1, sum = 0;

    while (n > 0) {
        last_digit = n % 10;
        prod *= last_digit;
        sum += last_digit;
        n /= 10;
    }

    cout << "Product: " << prod << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference (Product - Sum): " << (prod - sum) << endl;

    return 0; 
	
}
