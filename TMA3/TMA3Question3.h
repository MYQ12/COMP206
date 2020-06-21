#ifndef TMA3Q3_H
#define TMA3Q3_H

#include <iostream>
#include <cmath>

class Point{
private:
	double x, y;

public:
	Point(){   
		x = 0; 
		y = 0;   
	}

	Point(double px, double py){   
	    x = px;  
	    y = py;
	  }

	friend std::ostream & operator << (std::ostream &os, const Point &p);
	Point &operator+(const Point&rhs);
	Point &operator-(const Point&rhs);

	void setPoint(double px, double py){   
	    x = px; 
	    y = py; 
	  }

	double get_x() const{  
	     return x;   
	  }

	double get_y() const{  
	    return y;   
	  }
};

struct enclosure{
	Point top_right; 
	Point top_left;
	Point bottom_right;
	Point bottom_left;
};

class Shape{	
public:
	virtual double area() const = 0;
	virtual double perimeter () const = 0;
	virtual void display() = 0;
	
protected:
	enclosure bounding_box;		
};

class Circle: public Shape{
private:
	double radius;
		
public:
	Circle(); 

	Circle(const double radius, const Point center);

	double perimeter() const{   
	    return 2 * radius * M_PI;
	}

	double area() const{   
	    return M_PI *(radius * radius);
	}

	void display(){
		std::cout << "Class: Circle"	<< std::endl;
		std::cout << "Area: " << area() << " units squared" << std::endl;
		std::cout << "Circumference: " << perimeter() << " units" << std::endl;
		std::cout << "Bounding Box: " << "(" << bounding_box.top_right.get_x() << ", " << bounding_box.top_right.get_y() << ")";
		std::cout << " " << "(" << bounding_box.bottom_right.get_x() << ", " << bounding_box.bottom_right.get_y() << ")";
		std::cout << " " << "(" << bounding_box.top_left.get_x() << ", " << bounding_box.top_left.get_y() << ")";
		std::cout << " " << "(" << bounding_box.bottom_left.get_x() << ", " << bounding_box.bottom_left.get_y() << ")" << "\n\n";
	}
};

Circle::Circle(const double radius, const Point center):radius(radius){
	bounding_box.top_right.setPoint(center.get_x() + radius, center.get_y() + radius);
	bounding_box.bottom_right.setPoint(center.get_x() + radius, center.get_y() - radius);
	bounding_box.top_left.setPoint(center.get_x() - radius, center.get_y() + radius);
	bounding_box.bottom_left.setPoint(center.get_x() - radius, center.get_y() - radius);
}

class Square:public Shape{
private:
	double side;

public:
	Square(); 

	Square(const double side, const Point center);

	double area()const{
		return side * side;
	}

	double perimeter()const{
		return 4 * side;
	}
		
	void display(){
		std::cout << "Class: Square"	<< std::endl;
		std::cout << "Area: " << area() << " units squared" << std::endl;
		std::cout << "Perimeter: " << perimeter() << " units" << std::endl;
		std::cout << "Bounding Box: " << "(" << bounding_box.top_right.get_x() << ", " << bounding_box.top_right.get_y() << ")";
		std::cout << " " << "(" << bounding_box.bottom_right.get_x() << ", " << bounding_box.bottom_right.get_y() << ")";
		std::cout << " " << "(" << bounding_box.top_left.get_x() << ", " << bounding_box.top_left.get_y() << ")";
		std::cout << " " << "(" << bounding_box.bottom_left.get_x() << ", " << bounding_box.bottom_left.get_y() << ")" << "\n\n";
	}
};

Square::Square(const double side, const Point center):side(side){	
	bounding_box.top_right.setPoint(center.get_x() + side/2.0f, center.get_y() + side/2.0f);
	bounding_box.bottom_right.setPoint(center.get_x() + side/2.0f, center.get_y() - side/2.0f);
	bounding_box.top_left.setPoint(center.get_x() - side/2.0f, center.get_y() + side/2.0f);
	bounding_box.bottom_left.setPoint(center.get_x() - side/2.0f, center.get_y() - side/2.0f);
}

class Triangle: public Shape{
private:
	double side1;
	double side2;
	double side3;

public:
	Triangle();

	Triangle(const double side1, const double side2, const double side3, const Point center);

	double area()const{
		double half_perimeter = (side1 + side2 + side3)/2;

		return pow(half_perimeter*(half_perimeter - side1)*(half_perimeter - side2)*(half_perimeter - side3), 0.5);
	}

	double perimeter()const{
		return side1 + side2 + side3;
	}

	double max (double a, double b, double c){
		double max_value = 0;

		if( a >= b && a >= c)	
			max_value = a;

		else if( b >= a && b >= c)	
			max_value = b;

		else	
			max_value = c;

		return max_value;
	}
		
	double min (double aO, double bO, double cO){
		double min_value = 0;

		if( aO <= bO && aO <= cO)	
			min_value = aO;

		else if( bO <= aO && bO <= cO)	
			min_value = bO;

		else	
			min_value = cO;

		return min_value;
	}
		
	void display(){
		std::cout << "Class: Triangle"	<< std::endl;

		if(area() > 0){
			std::cout << "Area: " << area() << " units squared" << std::endl;
			std::cout << "Perimeter: " << perimeter() << " units" << std::endl;
		}	
		
		else
			std::cout << "The inputted sides do not form a triangle!" << std::endl;

		std::cout << "Bounding Box: " << "(" << bounding_box.top_right.get_x() << ", " << bounding_box.top_right.get_y() << ")";
		std::cout << " " << "(" << bounding_box.bottom_right.get_x() << ", " << bounding_box.bottom_right.get_y() << ")";
		std::cout << " " << "(" << bounding_box.top_left.get_x() << ", " << bounding_box.top_left.get_y() << ")";
		std::cout << " " << "(" << bounding_box.bottom_left.get_x() << ", " << bounding_box.bottom_left.get_y() << ")" << "\n\n";
	}
};

Triangle::Triangle(const double side1, const double side2, const double side3, const Point ref_point):side1(side1), side2(side2), side3(side3){
	Point vertex1;
	Point vertex2;
	Point vertex3;
	
	vertex1.setPoint(ref_point.get_x(), ref_point.get_y());
	vertex2.setPoint(side1, ref_point.get_y());
	
	double theta = acos((pow(side2,2) - pow(side3,2) - pow(side1,2))/(-2 * side3 * side1));
	
	vertex3.setPoint(side3 * cos(theta) + vertex1.get_x(), side3 * sin(theta) + vertex1.get_y());
	
	double x1 = vertex1.get_x();
	double x2 = vertex2.get_x();
	double x3 = vertex3.get_x();
	
	double y1 = vertex1.get_y();
	double y2 = vertex2.get_y();
	double y3 = vertex3.get_y();
	
	bounding_box.top_right.setPoint(max(x1, x2, x3), max(y1, y2, y3));
	bounding_box.bottom_right.setPoint(max(x1, x2, x3), min(y1, y2, y3));
	bounding_box.top_left.setPoint(min(x1, x2, x3), max(y1, y2, y3));
	bounding_box.bottom_left.setPoint(min(x1, x2, x3), min(y1, y2, y3));
}
#endif // TMA3Q3_H ///:~
