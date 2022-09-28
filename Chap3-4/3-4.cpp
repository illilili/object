#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle(); // 소멸자
	double getArea();
};
double Circle::getArea() {
	return 3.14 * radius * radius;
} 

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}
Circle::~Circle() {
	cout << "반지름 " << radius << " 원 소멸" << endl;
}

int main() {
	Circle donut;
	Circle pizza(30);
	return 0;
}