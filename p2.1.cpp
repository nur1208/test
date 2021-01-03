#include<iostream>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;

int main(){
    char in;int countTab = 0, countSpace=0, countnewLine=0;
    while((in = cin.get()) != EOF){
        if(in == '\t')
            countTab++;
        else if(in == ' ')
            countSpace++;
        else if(in == '\n')
            countnewLine++;
    }
    cout << "countTab = " << countTab << " countSpace = " << countSpace << " countnewLine = " << countnewLine<< endl;

    return 0;
}