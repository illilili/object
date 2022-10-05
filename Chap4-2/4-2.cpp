#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};
double Circle::getArea() {
	return 3.14 * radius * radius;
}
int main() {
	Circle circleArray[3]; 
	// �迭�ǰ����Ұ�ü�Ǹ������
	circleArray[0].setRadius(10); 
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);
	for (int i = 0; i < 3; i++) // �迭�ǰ����Ұ�ü�Ǹ������
		cout << "Circle " << i << "�Ǹ�����" << circleArray[i].getArea() << endl;
	Circle* p;
	p = circleArray; 
	for (int i = 0; i < 3; i++) { // ��ü�����ͷι迭����
		cout << "Circle " << i << "�Ǹ�����" << p->getArea() << endl;
		p++; 
	}
}