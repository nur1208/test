// Person1.h
#pragma once
#include <iostream>
using namespace std;

class Person1
{
    char *name;
    public:
        Person1(char *nm);
        Person1();
        ~Person1();
        void SetName(char *nm);
        char *GetName();
        void Show();
        ostream & operator <<(ostream &out);
};
