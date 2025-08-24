#include <iostream>
#include <math.h>
using namespace std;

bool prime(int n){
    if (n<=1){
        return false;
    }
    else{
        for (int i=2; i<=sqrt(n); i++){
            if (n%i==0){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    if (prime(n)) {
        cout << n << " is a prime number." << endl;
    } 
    else {
        cout << n << " is not a prime number." << endl;
    }
}