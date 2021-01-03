//This program show how to define constructor of the derived class 
#include<iostream>
using namespace std;
class Base
{
    private:
        int A;
    public:
     Base(int x) : A(x) { cout<<"class Base is initialized"<<endl; }

        void Show(){ cout<<A<<endl;}
        ~Base() { cout<<"class Base is deconstructed"<<endl; }
};
class classC
{
    int C;
    public:
        classC(int c1=0) :C(c1){ cout<<"class classC is constructed"<<endl; }
        void Show (){cout << C << endl;}
        ~classC(){ cout<<"class classC desstructed"<<endl; }
};

class Derived:public Base
{
    private:
        classC  c1;//contain an object c1,
        int B;
    public:
        Derived(int x,int y,int z) :Base(x),c1(z),B(y)
        {   
            cout<<"Derived is constructed"<<endl;
        }
//what will happen, if without Base(x)
    void Show()
    {
        Base::Show();
        c1.Show();
        cout<<B<<endl;
    }
    ~Derived(){ cout<<"class Derived destructed"<<endl; }
};
int main()
{
    Derived obj (8,9,3);
    obj.Show();
    return 0;
}


