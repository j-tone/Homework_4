#ifndef RECTANGLE2D_H
#define RECTANGLE2D_H


#include <string>
using namespace std;

class Rectangle2D{
private:
	double x, y;
	double width, height;
	double left, right, up, down;
public:
	Rectangle2D();
	Rectangle2D(double X, double Y, double W, double H);
	double getX() const;
	double getY() const;
	double getWidth() const;
	double getHeight() const;
	double getLeft() const;
	double getRight() const;
	double getUp() const;
	double getDown() const;
	void setX(double X);
	void setY(double Y);
	void setWidth(double W);
	void setHeight(double H);
	double getArea() const;
	double getPerimeter() const;
	bool contains(double X, double Y) const;
	bool contains(const Rectangle2D &r) const;
	bool overlaps(const Rectangle2D &r) const;
};

#endif