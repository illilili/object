#include <iostream>
using namespace std;
int main() {
	cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
	int i = 1;
	int n = 2;
	int& refn = n; // 참조변수refn선언. refn은n에대한별명
	n = 4;
	refn++;
	cout << i << '\t' << n << '\t' << refn << endl;
	refn = i;
	refn++;
	cout << i << '\t' << n << '\t' << refn << endl;
	int* p = &refn; // p는refn의주소를가짐
	*p = 20;
	cout << i << '\t' << n << '\t' << refn << endl;
}