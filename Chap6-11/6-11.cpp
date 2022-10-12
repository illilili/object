#include <iostream>
using namespace std;
class Circle {
private:
	static int numOfCircles;
	int radius;
public:
	Circle(int r = 1);
	~Circle() { numOfCircles--; } // �����ȿ��ǰ�������
	double getArea() { return 3.14 * radius * radius; }
	static int getNumOfCircles() { return numOfCircles; }
};
Circle::Circle(int r) {
	radius = r;
	numOfCircles++; // �����ȿ��ǰ�������
}
int Circle::numOfCircles = 0; // 0�����ʱ�ȭ
int main() {
	Circle* p = new Circle[10]; // 10���ǻ����ڽ���
	cout << "�����ϰ��ִ¿��ǰ���= " << Circle::getNumOfCircles() << endl;
	delete[] p; // 10���ǼҸ��ڽ���
	cout << "�����ϰ��ִ¿��ǰ���= " << Circle::getNumOfCircles() << endl;
	Circle a; // �����ڽ���
	cout << "�����ϰ��ִ¿��ǰ���= " << Circle::getNumOfCircles() << endl;
	Circle b; // �����ڽ���
	cout << "�����ϰ��ִ¿��ǰ���= " << Circle::getNumOfCircles() << endl;
}