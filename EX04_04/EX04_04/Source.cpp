#include <iostream>
using namespace std;

class Rectangle2D{
private:
	double x, y;
	double width, height;
	double left, right, up, down;
public:
	Rectangle2D(){
		x = 0;
		y = 0;
		width = 1;
		height = 1;
		left = (x - (width / 2));
		right = (x + (width / 2));
		up = (y + (height / 2));
		down = (y - (height / 2));
	}
	Rectangle2D(double X, double Y, double W, double H){
		x = X;
		y = Y;
		width = W;
		height = H;
		left = (x - (width / 2));
		right = (x + (width / 2));
		up = (y + (height / 2));
		down = (y - (height / 2));
	}

	double getX() const{
		return x;
	}
	double getY() const{
		return y;
	}
	double getWidth() const{
		return width;
	}
	double getHeight() const{
		return height;
	}

	double getLeft() const {
		return left;
	}
	double getRight() const {
		return right;
	}
	double getUp() const{
		return up;
	}
	double getDown() const{
		return down;
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

	bool contains(double X, double Y) const{

		if ((X > right) || (X < left)){
			return false;
		}
		else if ((Y > up) || (Y < down)){
			return false;
		}
		else
			return true;
	}

	bool contains(const Rectangle2D &r) const{
		if ((r.getLeft() < left) || (r.getRight() > right)){
			return false;
		}
		else if ((r.getDown() < down) || (r.getUp() > up)){
			return false;
		}
		else
			return true;
	}

	bool overlaps(const Rectangle2D &r) const{
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
};

int main()
{
	Rectangle2D r1(2, 2, 5.5, 4.9), r2(4, 5, 10.5, 3.2), r3(3, 5, 2.3, 5.4);
	cout << "R1's area is " << r1.getArea() << " and it's perimeter is " << r1.getPerimeter() << ".\n";
	cout << "Does R1 contain the point (3,3)? " << r1.contains(3, 3) << endl;
	cout << "Does R1 contain the rectangle R2? " << r1.contains(r2) << endl;
	cout << "Does R3 overlap R1? " << r1.overlaps(r3) << endl;
}