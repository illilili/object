#include <iostream>
using namespace std;

class Circle;

int main() {
	int radius;
	while(true) {
		cout << "�����������Է�(�����̸�����)>> ";
		cin >> radius;
		if (radius < 0) break; // �������ԷµǾ������Ѵ�.
		Circle* p = new Circle(radius); // ������ü����
		cout << "���Ǹ�����" << p->getArea() << endl;
		delete p; // ��ü��ȯ
	}
}
	}
}