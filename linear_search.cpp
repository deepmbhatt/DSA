#include <iostream>
using namespace std;

int main(){
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b;
    cout << "Enter a number to search: " << endl;
    cin >> b;
    for (int i=0; i<10; i++){
        if (a[i]==b){
            cout << "Element found at index: " << i << endl;
            return 0;
        }
    }
    cout << "Element not found." << endl;
    return 0;
}