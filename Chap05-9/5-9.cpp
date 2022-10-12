#include <iostream>
using namespace std;
class Circle {
private:
	int radius;
public:
	Circle(Circle& c); 
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};
Circle::Circle(Circle& c) { 
	this->radius = c.radius;
	cout << "��������ڽ���radius = " << radius << endl;
}
int main() {
	Circle src(30); 
	Circle dest(src);   // ���� ������ ȣ��
	cout << "�����Ǹ���= " << src.getArea() << endl;
	cout << "�纻�Ǹ���= " << dest.getArea() << endl;
}