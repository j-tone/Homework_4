#include <iostream>
#include "Rectangle2D.h"
using namespace std;

Rectangle2D::Rectangle2D(){
	x = 0;
	y = 0;
	width = 1;
	height = 1;
	left = (x - (width / 2));
	right = (x + (width / 2));
	up = (y + (height / 2));
	down = (y - (height / 2));
}
Rectangle2D::Rectangle2D(double X, double Y, double W, double H){
	x = X;
	y = Y;
	width = W;
	height = H;
	left = (x - (width / 2));
	right = (x + (width / 2));
	up = (y + (height / 2));
	down = (y - (height / 2));
}

double Rectangle2D::getX() const{
	return x;
}
double Rectangle2D::getY() const{
	return y;
}
double Rectangle2D::getWidth() const{
	return width;
}
double Rectangle2D::getHeight() const{
	return height;
}

double Rectangle2D::getLeft() const {
	return left;
}	
double Rectangle2D::getRight() const {
	return right;
}
double Rectangle2D::getUp() const{
	return up;
}
double Rectangle2D::getDown() const{
	return down;
}

void Rectangle2D::setX(double X){
	x = X;
}	
void Rectangle2D::setY(double Y){
	y = Y;
}
void Rectangle2D::setWidth(double W){
	if (W > 0){
		width = W;
	}
	else
		width = 1;
}
void Rectangle2D::setHeight(double H){
	if (H > 0){
		height = H;
	}
	else
		height = 1;
}

double Rectangle2D::getArea() const{
	return width*height;
}
double Rectangle2D::getPerimeter() const{
	return ((width * 2) + (height * 2));
}

bool Rectangle2D::contains(double X, double Y) const{
	if ((X > right) || (X < left)){
			return false;
	}
	else if ((Y > up) || (Y < down)){
		return false;
	}
	else
		return true;
}

bool Rectangle2D::contains(const Rectangle2D &r) const{
	if ((r.getLeft() < left) || (r.getRight() > right)){
		return false;
	}
	else if ((r.getDown() < down) || (r.getUp() > up)){
		return false;
	}
	else
		return true;
}

bool Rectangle2D::overlaps(const Rectangle2D &r) const{
	if (right <= r.getLeft()){
		return false;
	}
	else if (left >= r.getRight()){
		return false;
	}
	else if (up <= r.getDown()){
		return false;
	}
	else if (down >= r.getUp()){
		return false;
	}
	else if (contains(r) == true){
		return false;
	}
	else
		return true;
}