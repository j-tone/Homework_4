#include <iostream>
#include "Rectangle2D.h"
using namespace std;

int main()
{
	Rectangle2D r1(2, 2, 5.5, 4.9), r2(4, 5, 10.5, 3.2), r3(3, 5, 2.3, 5.4);
	cout << "R1's area is " << r1.getArea() << " and it's perimeter is " << r1.getPerimeter() << ".\n";
	cout << "Does R1 contain the point (3,3)? " << r1.contains(3, 3) << endl;
	cout << "Does R1 contain the rectangle R2? " << r1.contains(r2) << endl;
	cout << "Does R3 overlap R1? " << r1.overlaps(r3) << endl;
}