#include <iostream>
using namespace std;

class Rectangle {  // 클래스 선언
public:
	int width;
	int height;
	int getArea();  // 함수
};

int Rectangle::getArea() {  // 함수 구현
	return width * height;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "사각형의 면적은 " << rect.getArea() << endl;
}