#include<iostream>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;

template<typename T>
void input (T a,int n){
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}





template<typename T>
void sort(T a[],int n){
    T temp;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j]; 
                a[j]=a[j+1];  /*Swap have been done here*/
                a[j+1]=temp;              
            }   
        }    
    }
}



template<typename T>
void output(T a, int n){
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}



int main() {
    int a[15];
	float f[10];
	double d[8];
	string s[13];
	char c[20];

	input(a,5);
	sort(a,5);
	output(a,5);

	input(f,5);
	sort(f,5);
	output(f,5);

	input(d,5);
	sort(d,5);
	output(d,5);

	input(s,5);
	sort(s,5);
	output(s,5);

	input(c,5);
	sort(c,5);
	output(c,5);

    return 0;
}