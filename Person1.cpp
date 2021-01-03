#include<string.h>
#include<iostream>
using namespace std;
#include "./Person1.h"
Person1::Person1(char *nm)
{  name=new char[strlen(nm)+1];
   strcpy(name,nm);
}
Person1::Person1()
{   name=NULL;
}
Person1::~Person1()
{  if( name)     delete name;
}
void Person1::SetName(char *nm)
{if(name)     delete name;
name=new char[strlen(nm)+1];
strcpy(name,nm);
}
char *Person1::GetName()
{    return name;
}
void Person1::Show()
{   cout<<"name="<<name;
}
ostream & Person1::operator <<(ostream &out)
{out<<"name="<<name;
return out;
}
