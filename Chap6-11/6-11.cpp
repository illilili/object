#include <iostream>
using namespace std;
class Circle {
private:
	static int numOfCircles;
	int radius;
public:
	Circle(int r = 1);
	~Circle() { numOfCircles--; } // 생성된원의개수감소
	double getArea() { return 3.14 * radius * radius; }
	static int getNumOfCircles() { return numOfCircles; }
};
Circle::Circle(int r) {
	radius = r;
	numOfCircles++; // 생성된원의개수증가
}
int Circle::numOfCircles = 0; // 0으로초기화
int main() {
	Circle* p = new Circle[10]; // 10개의생성자실행
	cout << "생존하고있는원의개수= " << Circle::getNumOfCircles() << endl;
	delete[] p; // 10개의소멸자실행
	cout << "생존하고있는원의개수= " << Circle::getNumOfCircles() << endl;
	Circle a; // 생성자실행
	cout << "생존하고있는원의개수= " << Circle::getNumOfCircles() << endl;
	Circle b; // 생성자실행
	cout << "생존하고있는원의개수= " << Circle::getNumOfCircles() << endl;
}