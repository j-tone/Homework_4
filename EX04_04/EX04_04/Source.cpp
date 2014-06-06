#include <iostream>
using namespace std;

class Rectangle2D{
private:
	double x, y;
	double width, height;
public:
	Rectangle2D(){
		x = 0;
		y = 0;
		width = 1;
		height = 1;
	}
	Rectangle2D(double X, double Y, double W, double H){
		x = X;
		y = Y;
		width = W;
		height = H;
	}

	int getX() const{
		return x;
	}
	int getY() const{
		return y;
	}
	int getWidth() const{
		return width;
	}
	int getHeight() const{
		return height;
	}

	void setX(double X){
		x = X;
	}
	void setY(double Y){
		y = Y;
	}
	void setWidth(double W){
		if (W > 0){
			width = W;
		}
		else
			width = 1;
	}
	void setHeight(double H){
		if (H > 0){
			height = H;
		}
		else
			height = 1;
	}

	double getArea() const{
		return width*height;
	}
	double getPerimeter() const{
		return ((width * 2) + (height * 2));
	}

};

int main()
{

}