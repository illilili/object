#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};
Circle::Circle() {
	radius = 1;
	cout << "积己磊角青radius = " << radius << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "积己磊角青radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "家戈磊角青radius = " << radius << endl;
}