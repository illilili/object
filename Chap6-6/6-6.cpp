#include <iostream>
using namespace std;
class MyVector {
	int* p;
	int size;
public:
	MyVector(int size = 100) {
		p = new int[100];
	}
	~MyVector() { delete[] p; }
};
int main() {
	MyVector* v1, * v2;
	v1 = new MyVector(); 
	v2 = new MyVector(1024); 
	delete v1;
	delete v2;
}