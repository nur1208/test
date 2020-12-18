// ConsoleApplication2.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <sstream>
using namespace std;
int idCounter = 0;

class Point {
private:
	double x, y;
public:
	Point(double newX = 0, double newY = 0) : x(newX), y(newY) {};
	Point(Point const &p) { this->setX(p.getX()); this->setY(p.getY()); };
	double getX() const { return x; } ;
	double getY() const { return y; } ;
	void setX(double const newX) { x = newX; };
	void setY(double const newY) { y = newY; };
	
	void operator=(double n){  this->setX(n)  ; this->setY(n); };
	
	friend ostream& operator<< (ostream&, Point&);
	friend istream& operator>> (istream&, Point&);
};

ostream& operator << (ostream& output, Point& p){
	output << p.x << " " << p.y;
	return output;
}

istream& operator>> (istream& input, Point& p){
	input >> p.x >> p.y;
	return input;
}

class Shape {
private:
	string id;
	string name;
	 
public:
	Shape(string newId = "" ,string newName = ""):id(newId), name(newName){};
	void setId(string newId) { id = newId; };
	void setName(string newName) { name = newName; };

	string getId() { return id; };
	string getName() { return name; };
	
 	virtual void show() = 0;
};

class Circle : public Shape {
private:
	Point p;
	double r;
public:
	Circle(Point newP = 0, double newR =0, string newId= "") :Shape( newId,  "circle"+newId), p(newP), r(newR) {
	};
	
	Point  getP() const {return p;}
	void show() ;
	
	friend ostream& operator<< (ostream&, Circle&);	
};

void Circle::show() {
	cout << "id = " << this->getId() << " name = " << this->getName() << " xc = "  << this->p.getX()<< " xy = "  << this->p.getY() <<  " r = " <<  this->r << endl;
}

ostream& operator << (ostream& output, Circle& c){
	output <<  "xc = " << c.p.getX()<< " xy = "  << c.p.getY() <<  " r = " <<  c.r;
	return output;
}

void display(Shape *s){
	s->show();
}

string toString(int num){
	stringstream nums;
	nums << num;
	string stringNum;
		nums >> stringNum;
	return stringNum;
}

// Circle& createCircle(){
// 	string stringNum = toString(10);
// 	Point p(1, 2);
// 	Circle c(p, 5, toString(10));
// 	return c;
// }

int main()
{

	int choose;
	cout << "Demo inheritence of class, virtual class, virtual function \n shape, point, circle, ellipse,retangle, square \n 0.exit the program \n 1.create a circle \n 2.create a ellipse \n 3.create a square \n 4.create a rectangle \n 5.List geometry objects \n";
	cout << "Enter your choice : ";
	cin >> choose;
	Shape** base = new Shape*[20];
	int index = 0;
	while(choose != 0){

		if(choose == 1){
			// string stringNum = toString(10);
			Point p;
			double r;
			cout << "Input xc,yc,r of circle: ";
			cin >> p >> r;
			base[index] = new Circle(p, r, toString(index+1));
			
			display(base[index]);
			
			
		}
		cout << "Demo inheritence of class, virtual class, virtual function \n shape, point, circle, ellipse,retangle, square \n 0.exit the program \n 1.create a circle \n 2.create a ellipse \n 3.create a square \n 4.create a rectangle \n 5.List geometry objects \n";
		cout << "Enter your choice : ";
		cin >> choose;

	}
	
	


	

	
	/*string stringNum = toString(10);
	Point p(1, 2);
	Circle c(p, 5, stringNum);
	Circle c1(p, 5, toString(2));
	Point p1 = p;
	cout << c << endl;
	display(&c);
	display(&c1);
	//c.show();
	cout << "here" << endl;*/
	return 0;
}

