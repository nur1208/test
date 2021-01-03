#include<iostream>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;

class Point {
    double x, y;
    public:
        Point(double newX = 0, double newY = 0) :x(newX), y(newY) { cout << "point's constructer get called" << endl;};
        ~Point(){};
        const double getX() const {return x;};
        const double getY() const {return y;};
        void Set(double const newX, double const newY) {x = newX;y = newY;};
        void setX(double const newX) {x = newX;}
        void setY(double const newY) {y = newY;}
        void Show();
        double Distance(Point&);

};

void Point::Show() {
    cout << "x = " << getX() << " y = " << getY() << endl;
}

double Point::Distance(Point & p){
    return sqrt(( (p.getX() - this->getX()) *  (p.getX() - this->getX())) + (( p.getY() - this->getY()) *  (p.getY() - this->getY())) );
}


int main() {
    // Point p1(0,0),p2(5,0),p3(0,5);
	// p1.Show();
	// p2.Show();
	// p3.Show();
	// double d1=p1.Distance(p2);
	// double d2=p2.Distance(p3);
	// double d3=p3.Distance(p1);
	// cout<< "d1= "<< fixed <<setprecision(2)<< d1<<" d2= "<< fixed <<setprecision(2)<<d2<<" d3= "<< fixed <<setprecision(2)<<d3<<endl;

    double x1,y1,x2,y2,x3,y3;
	Point p1,p2,p3;
	cin>>x1>>y1;
	p1.Set(x1,y1);
	cin>>x2>>y2;
	p1.Set(x2,y2);
	cin>>x3>>y3;
	p1.Set(x3,y3);

    p1.Show();
	p2.Show();
	p3.Show();

	double d1=p1.Distance(p2);
	double d2=p2.Distance(p3);
	double d3=p3.Distance(p1);
	cout<< "d1= "<< fixed <<setprecision(2)<< d1<<" d2= "<< fixed <<setprecision(2)<<d2<<" d3= "<< fixed <<setprecision(2)<<d3<<endl;


    return 0;
}