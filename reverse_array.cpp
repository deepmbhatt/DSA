#include <iostream>
using namespace std;

int main(){
    int nums[5] = {1, 2, 3, 4, 5};
    int rev[5];
    int count = 0;
    for (int i = (sizeof(nums)/sizeof(nums[0]))-1;i>=0;i--){
        rev[count++] = nums[i];
    }
    for (int i=0;i<sizeof(rev)/sizeof(rev[0]);i++){
        cout << rev[i] << " ";
    }
}