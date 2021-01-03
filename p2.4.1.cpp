// p2.cpp : Defines the entry point for the console application.
//

#include<iostream>
using namespace std;


int main()
{
	int a[100];
	char c;
	int num = 0, count = 0;
	

    
	while ((c = cin.get()) != '\n') {
		bool flag = false;
		if (c >= '0' && c <= '9') {
			num = num * 10 + c - '0';
			flag = true;
		}
			
		else {
			if(flag || num != 0)
				a[count++] = num;
			cin.sync();
			num = 0;
		}
		
	}
	if (c == '\n')
		a[count++] = num;
	for (int i = 0; i < count; i++)
				cout << a[i] << endl;
	

    return 0;
}

