#include <iostream>
using namespace std;

class Rectangle {  // Ŭ���� ����
public:
	int width;
	int height;
	int getArea();  // �Լ�
};

int Rectangle::getArea() {  // �Լ� ����
	return width * height;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "�簢���� ������ " << rect.getArea() << endl;
}