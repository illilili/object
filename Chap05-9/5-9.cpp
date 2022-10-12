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
	cout << "복사생성자실행radius = " << radius << endl;
}
int main() {
	Circle src(30); 
	Circle dest(src);   // 복자 생성자 호출
	cout << "원본의면적= " << src.getArea() << endl;
	cout << "사본의면적= " << dest.getArea() << endl;
}