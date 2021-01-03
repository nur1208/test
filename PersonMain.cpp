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

void MyFunc(Person p1)
{
    p1.operator<<(cout);
    cout<<endl;
}
int  main()
{
    Person p1("Wingo");
    Person p2(p1);
    Person p3;
    p3=p1;
    MyFunc(p3);
    p1.Show(); cout<<endl;

    p1.Show();cout<<endl;
    p1.operator<<(cout);cout<<endl;
    p1<<cout;cout<<endl;
    return 0;

}
