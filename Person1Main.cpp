

#include <iostream>
#include<string.h>
using namespace std;

class Person1
{
    char *name;
    public:
        Person1(char *nm);
        Person1();
        ~Person1();
        Person1(Person1 &p);
        void SetName(char *nm);
        char *GetName();
        void Show();
        ostream & operator <<(ostream &out);
        Person1 & operator =( Person1 &);
};

Person1 & Person1::operator =( Person1 &p){
    name = new char[strlen(p.name) + 1];
    strcpy(name,p.name);
    return *this;
}

Person1::Person1(Person1 &p){
    name = new char[strlen(p.name) + 1];
    strcpy(name,p.name);
}
Person1::Person1(char *nm)

{
    cout << "here" << endl;
    name=new char[strlen(nm)+1];
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


void MyFunc(Person1 p1)
{
    p1.operator<<(cout);
    cout<<endl;
}
int main()
{
    Person1 p1("Wingo");
    Person1 p2(p1);
    p1.Show(); cout<<endl;
    p2.Show(); cout<<endl;
    Person1 p3;
    p3=p1;
    p3.Show(); cout<<endl;

    MyFunc(p3);
    p1.Show(); cout<<endl;

    p1.Show();cout<<endl;
    p1.operator<<(cout);cout<<endl;
    p1<<cout;cout<<endl;
    return 0;

}
