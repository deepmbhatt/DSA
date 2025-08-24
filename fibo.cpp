#include <iostream>
using namespace std;

int fibo(int n){
    if (n==1){
        return 1;
    }
    else if (n==0){
        return 0;
    }
    else{
        return fibo(n-1) + fibo(n-2);
    }
}
int main(){
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    cout << "Fibonacci series up to " << n << " terms: " << endl;
    int num = 0;
    while(true){
        int x = fibo(num);
        if (x > n) {
            break;
        }
        cout << x << " ";
        num++;
    }
    cout << endl;
}