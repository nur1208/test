#include <iostream>
#include <math.h>
using namespace std;
// template

class Circle
{
    double r;
    public:
    Circle(double r1):r(r1) {}
    Circle():r(0){ }
    void SetR(double r1) {r=r1;}
    friend ostream & operator<<(ostream &out,Circle &c);
    bool operator <(Circle &c) { return r<c.r;}
    bool operator >(Circle &c) { return r>c.r;}
};
ostream & operator<<(ostream &out,Circle &c)
{
    out<<c.r;
    return out;
}


const int MaxSize=100;
template<class T>
class MyArr
{
    T elem[MaxSize];
    int len;
public:
    MyArr(int size) { len=size;}
    MyArr() { len=0;}
    ~MyArr() {  }
    void Sort() ;
    T GetMax();
    T GetMin();
    int Insert(int pos,T x);
    int Delete(int pos);
    int Locate(T v);
    void Show();
};

template<class T>
void MyArr<T>::Show()
{
    int i;
    for(i=0;i<len;i++)
    {
        if(i%10==0)
        cout<<endl;
        cout<<elem[i]<<" ";

    }
    cout<<endl;
}

template<class T>
void MyArr<T>::Sort()
{
for(int i=1;i<len;i++)
    for(int j=0;j<len-i;j++)
    if(elem[j]>elem[j+1])
    {
        int temp=elem[j];elem[j]=elem[j+1];elem[j+1]=temp;
    }
}
template<class T>
T MyArr<T>::GetMax()
{
T max=-999999;
for(int i=0;i<len;i++)
    if(elem[i]>max)
        max=elem[i];
return max;
}
template<class T>
T MyArr<T>::GetMin()
{
T min=999999;
for(int i=0;i<len;i++)
    if(elem[i]<min)
        min=elem[i];
return min;
}
template<class T>
int MyArr<T>::Insert(int pos,T x)
{
if(pos<0 || pos>=MaxSize || pos>len)
    return 0;
for(int i=len;i>pos;i--)
    elem[i]=elem[i-1];
elem[pos]=x;
len++;
return 1;
}

template<class T>
int MyArr<T>::Delete(int pos)
{
if(pos<0 ||  pos>=len)
    return 0;
for(int i=pos;i<len-1;i++)
    elem[i]=elem[i+1];    
return 1;
}
void Test1()
{
    MyArr<float> arr;


float x;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>x;
    arr.Insert(i,x);
}
cout<<"The array is\n";
arr.Show();
cout<<"max="<<arr.GetMax()<<endl;
cout<<"min="<<arr.GetMin()<<endl;
}
void Test2()
{
    MyArr<Circle> cirArr;
    int n;
    cin>>n;
    Circle c;
    double r;
    for(int i=0;i<n;i++)
    {
    cin>>r;
    c.SetR(r);
    cirArr.Insert(i,c);
    }
    cout<<cirArr.GetMax()<<endl;
    cout<<cirArr.GetMin()<<endl;

}
int main( )
{
    //Test1();
    Test2();
    return 0;
}


