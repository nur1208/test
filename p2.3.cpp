#include<iostream>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[10];
    for (int i = 0; i < n; i++)
    {
        string idName;
        cin >> idName;
        int j = 0;
        a[i] = 0;
        while(j < idName.length() && idName[j]>= '0' && idName[j] <= '9'){
            a[i] = a[i] * 10 + idName[j] - '0';
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    


    return 0;
}