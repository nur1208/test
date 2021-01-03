#include<iostream>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;

int getSum(int num1, int num2, int num3 = 0, int num4 = 0,int num5 = 0){
    return num1 + num2 + num3 + num4 + num5;
}

int main(){

    cout << getSum(1,2);
    cout << getSum(1,2,3);
    cout << getSum(1,2,3,4);
    cout << getSum(1,2,3,4,5);

    return 0;
}

