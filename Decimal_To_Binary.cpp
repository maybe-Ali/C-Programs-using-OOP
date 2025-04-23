#include<iostream>
using namespace std;
int main(){
    int n, i = 0, binary[100];
    cout << "Enter a decimal number: ";
    cin >> n;
    while (n > 0) {
        binary[i] = n % 2; 
        n = n / 2; 
        i++;
    }
    cout << "Binary equivalent: ";
    for (int j = i - 1; j >= 0; j--) { 
        cout << binary[j];
    }
    cout << endl; 

    return 0;
}