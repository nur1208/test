// Person.h
#pragma once
#include <iostream>
using namespace std;

class Person
{
    char name[30];
    public:
        Person(char *nm);
        Person();
        ~Person();
        void SetName(char *nm);
        char *GetName();
        void Show();
        ostream & operator <<(ostream &out);
};
