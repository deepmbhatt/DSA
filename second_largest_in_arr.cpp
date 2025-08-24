#include <iostream>
using namespace std;

int main(){
    int num[5] = {33,12,76,54,100};
    int max = 0;
    int second_max = 0;
    for (int i:num){
        if (i>max){
            second_max = max;
            max = i;
        }
        else if (i>second_max && i<max){
            second_max = i;
        }
    }
    cout << "Second largest element is: " << second_max << endl;
}