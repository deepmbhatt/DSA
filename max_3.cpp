#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c;
    if (a>b && a>c){
        cout << "The maximum is: " << a << endl;
    }
    else if (b>c && b>a)
    {
        cout << "The maximum is: " << b << endl;
    }
    else
    {
        cout << "The maximum is: " << c << endl;
    }

}