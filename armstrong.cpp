#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    int sum = 0, temp = n, digits = 0;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    if (sum == n) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
}