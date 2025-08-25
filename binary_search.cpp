#include <iostream>
using namespace std;

int binary(int arr[], int low, int high, int n){
    int mid = (high+low)/2;
    if(low>high) return -1;
    if (arr[mid] == n){
        return mid;
    }
    else if (arr[mid] < n) {
        return binary(arr, mid+1, high, n);
    }
    else {
        return binary(arr, low, mid-1, n);
    }
}

int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int b;
    cin >> b;
    int index = binary(a, 0, 9, b);
    if(index != -1) cout << "Element found at index: " << index << endl;
    else cout << "Element not found." << endl;
}