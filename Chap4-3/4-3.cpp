#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(intr) { radius = r; }
	double getArea();
};
double Circle::getArea() {
	return 3.14 * radius * radius;
}
intmain() {
	Circle circleArray[3] = { Circle(10), Circle(20), Circle() }; // Circle 배열초기화
	for (int i = 0; i < 3; i++)
		cout << "Circle " << i << "의면적은" << circleArray[i].getArea() << endl;
}