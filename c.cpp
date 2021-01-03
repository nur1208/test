#include<iostream>
using namespace std;
class ClassA
{  public:
       ClassA();
       ~ClassA();     
};
ClassA::ClassA()
{     
    cout<<"ClassA Constructor\n";
}
ClassA::~ClassA()
{
    cout<<"ClassA Destroyed\n"; 
}
class ClassB : public ClassA
{    
    public:
        ClassB();
        ~ClassB();
};
ClassB::ClassB() 
{   
    cout<<"ClassB Constructor\n";
}
ClassB::~ClassB()
{ 
    cout<<"ClassB Destroyed\n"; 
}

int main()
{     
    ClassB b;
    return 0;
}

