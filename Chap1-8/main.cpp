#include <iostream>
using namespace std;

class Circle;

int main() {
	int radius;
	while(true) {
		cout << "정수반지름입력(음수이면종료)>> ";
		cin >> radius;
		if (radius < 0) break; // 음수가입력되어종료한다.
		Circle* p = new Circle(radius); // 동적객체생성
		cout << "원의면적은" << p->getArea() << endl;
		delete p; // 객체반환
	}
}
	}
}