// p2.cpp : Defines the entry point for the console application.
//

#include<iostream>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;


int main()
{
	int a[100];
	char c;
	int num = 0, count = 0, i=-1, j=0;
    bool increacI = true;
	string input;
    cin >> input;
	while (j < input.length()) {
		if(increacI && input[j] >= '0' && input[j] <= '9'){
            i++;
            a[i] = 0;
            increacI = false;
        }
		if (input[j] >= '0' && input[j] <= '9') {
			a[i] = a[i] * 10 + input[j] - '0';
		}	
		else{
            increacI = true;
        }
		j++;
	}

	for (int k = 0; k <= i; k++)
				cout << a[k] << " ";
	

    return 0;
}

