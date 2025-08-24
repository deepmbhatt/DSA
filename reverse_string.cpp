#include <iostream>
#include <string.h>
using namespace std;

string rev_str(string s){
    if (s.size()==1){
        return s;
    }
    else{
        return rev_str(s.substr(1)) + s[0];
    }
}
int main(){
    string n;
    cout << "Enter a string: " << endl;
    cin >> n;
    cout << "Reversed string: " << endl;
    cout << rev_str(n) << endl;
}