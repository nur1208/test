// #include<iostream>
// #include <math.h>
// using namespace std;

// int count=0;//to record calling times of counstructor

// class Point
// {
// private:
// 	double x,y;
// public:
// 	Point (double x1,double y1);
// 	Point();
// 	Point(const Point &p);
// 	~Point(){}

// 	double Getx()const{ return x;}
// 	double Gety()const{ return y;}
// 	void   SetX(double x1) { x=x1;}
// 	void   SetY(double y1) { y=y1;}
	
// 	void   Move(double dx,double dy) {  x+=dx;y+=dy;}
// 	void   Show();
// 	Point &operator =(Point &p);

// 	double Distance (Point &p);
	
// };
// Point::Point()
// {
// 	x=0;
// 	y=0;
// 	cout<<"Point constructor "<<endl;
// 	count++;
// }
// Point::Point (double x1,double y1)
// {
// 	x=x1;
// 	y=y1;
// 	cout<<"Point constructor "<<endl;
// 	count++;
// }
// Point::Point(const Point &p)
// {	
// 	x=p.x;
// 	y=p.y;
// 	cout<<"Point constructor "<<endl;
// 	count++;
// }
// Point &Point::operator =(Point &p) 
// {
// 	x=p.x;
// 	y=p.y;
// 	return *this; 
// }


// void Point::Show()
// {
// 	cout<<"("<<x<<","<<y<<")";

// }
// double Point::Distance(Point &p)
// {
// 	return sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y));
// }

// int main()
// {
// 	Point p1(3,5),p2;
// 	p2=p1;
// 	p2.Move(5,10);
// 	double d=p1.Distance(p2);
// 	cout<<"Distance="<<d<<endl;
// 	cout<<"Count="<<count<<endl;

// 	return 0;
// }



#include<iostream>
using namespace std;

class Circle
{
private:
     double r, x , y;
public:
    Circle(double newX = 0, double newY = 0, double newR = 0): x(newX),y(newY),r(newR){};
    // Circle & operator++();
    friend ostream& operator << (ostream& out,Circle & c);
};
ostream& operator << (ostream& out,Circle &c){
    out << c.x << c.y << c.r;
    return out;
}
// Circle & Circle::operator++()
// {    this->r+=1;
//     return *this;
// }
int main()
{    
	Circle c1(3,4,5);
    //  ++c1;//c1++;
     cout << c1;
    return 0;
}