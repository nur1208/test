#include<iostream>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;

int main() {

    cout.setf(ios::showbase | ios::uppercase);
    for (int i = 65; i <= 90; i++)
    {
        cout << (char)i << " " << dec << i << " " << hex << i << " " << oct << i <<endl;
    }
    

    return 0;
}