// Person.cpp
#include<string.h>
#include<iostream>
using namespace std;

#include "Person.h"
Person::Person(char *nm)
{
    strcpy(name,nm);
}
Person::Person()
{
}
Person::~Person()
{
}
void Person::SetName(char *nm)
{
    strcpy(name,nm);
}
char *Person::GetName()
{
    return name;
}
void Person::Show()
{
    // cout<<"name="<<name;

}
