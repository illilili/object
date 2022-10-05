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


int main() {
	Circle* pArray = new Circle[3];
	pArray[0].setRadius(10);
	pArray[1].setRadius(20);
	pArray[2].setRadius(30);
	for (int i = 0; i < 3; i++) {
		cout << pArray[i].getArea() << '\n';
	}
	Circle* p = pArray;
	for (int i = 0; i < 3; i++) {
		cout << p->getArea() << '\n';
		p++;
	}
	delete[] pArray;
}