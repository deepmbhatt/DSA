#include <iostream>
using namespace std;

bool isPalindrome(int n){
    int reversed = 0;
    int original = n;
    while(n>0){
        int digit = n%10;
        reversed = reversed*10 + digit;
        n /= 10;
    }
    return original == reversed;
}

int main(){
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    if (isPalindrome(n)){
        cout << n << " is a palindrome." << endl;
    }
    else{
        cout << n << " is not a palindrome." << endl;
    }
}