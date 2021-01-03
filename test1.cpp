// class Circle
// { public:
//       Circle operator *(double s);
//       friend Circle operator*(double s,Circle &c);
// };
// Circle operator*(double s,Circle &c)
// {    return Circle( c.xc,c.yc,c.r*s);
// }
// Circle Circle::operator *(double s)
// {     this->r*=s;
//       return *this;
// }
// int Test()
// {    Circle c1(3,5,5);
//       Circle c2,c3;
//       c2=c1*3;
//        c3=3*c1;
// }

#include<iostream>
using namespace std;

class Circle
{
private:
     double r, x , y;
public:
    Circle(double newX = 0, double newY = 0, double newR = 0): x(newX),y(newY),r(newR){};
    Circle & operator++();
    ostream& operator<< (ostream&);

    friend ostream& operator << (ostream& out,Circle & c);
};
ostream& Circle:: operator<< (ostream& out){
    out << this->x << " "<< this->y << " " << this->r;
    return out;
}
ostream& operator << (ostream& out,Circle &c){
    out << c.x << c.y << c.r;
    return out;
}
Circle & Circle::operator++()
{    this->r+=1;
    return *this;
}
int main()
{    Circle c1(3,4,5);
     ++c1;//c1++;
      c1<<cout;
    return 0;
}

