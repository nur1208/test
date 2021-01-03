#include <iostream>
#include <math.h>
using namespace std;

class Point
{
private:
	double x,y;
public:
	Point (double x,double y):x(x),y(y){}
	Point():x(0),y(0){}
	Point(const Point &p):x(p.x),y(p.y){}//clone constructor
	~Point(){}
	double GetX()const{ return x;}
	double GetY()const{ return y;}
	void   SetX(double x1) { x=x1;}
	void   SetY(double y1) { y=y1;}
	double Distance (Point &p);
    void   Move(double dx,double dy) {  x+=dx;y+=dy;}
	
	int operator==(Point &p);

	friend  ostream & operator<<(ostream &out,Point &p);
	friend  istream & operator>>(istream &in,Point &p);
};

ostream & operator<<(ostream &out,Point &p)
{
	//out<<p.x<<"  "<<p.y;
	out<<"("<<p.x<<","<<p.y<<")";
	return out;
}
istream & operator>>(istream &in,Point &p)
{
	in>>p.x>>p.y;
	return in;
}

double Point::Distance(Point &p)
{
	return sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y));
}

class Triangle
{
private :
	Point *m_p1,*m_p2,*m_p3;
	
public:
	Triangle(Point *p1,Point *p2,Point *p3);
	Triangle();
	Triangle(Triangle &t);
	Point *GetP1() { return m_p1;}
	Point *GetP2() { return m_p2;}
	Point *GetP3() { return m_p3;}
	~Triangle(){  }
	void Movep1(double dx,double dy);
	friend  ostream & operator<<(ostream &out,Triangle &t);
};
void Triangle::Movep1(double dx,double dy)
{
	m_p1->Move(dx,dy);
}

Triangle::Triangle(Point *p1,Point *p2,Point *p3)
{
	m_p1=p1;
	m_p2=p2;
	m_p3=p3;
}

Triangle::Triangle()
{
	m_p1=new Point(0,0);
	m_p2=new Point(0,0);
	m_p3=new Point(0,0);

}

Triangle::Triangle(Triangle &t1)
{
	m_p1=t1.GetP1();
	m_p2=t1.GetP2();
	m_p3=t1.GetP3();

}
ostream & operator<<(ostream &out,Triangle &t)
{
	out<<*(t.m_p1)<<" "<<*(t.m_p2)<<" "<<*(t.m_p3)<<endl;
	return out;
}

int main
()
{
	
	Point *a=new Point(1,0),*b=new Point(5,0),*c=new Point(2,4),*d=new Point(6,6.1);
	
	Triangle t1(a,b,c);
	Triangle t2(a,c,d);
	
	cout<<"triangle 1:"<<t1;
	cout<<"triangle 2:"<<t2;
	cout<<"Move a Point  from ";
	cout<<*a;
	a->Move(0.5,0.5);
	cout<<" to "<<*a<<endl;
	cout<<"triangle 1:"<<t1;
	cout<<"triangle 2:"<<t2;

	//release the memory 
	delete a;
	delete b;
	delete c;
	delete d;

	return 0;
}
