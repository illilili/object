#include <iostream>
using namespace std;
int sum(int a, int b) {
	int s = 0;
	for (int i = a; i <= b; i++)
		s += i;
	return s;
}
int sum(int a) { 
	int t = 0;
	for (int i = 0; i <= a; i++)
		t += i;
	return t;
}
int main() {
	cout << sum(3, 5) << endl;
	cout << sum(3) << endl;
	cout << sum(100) << endl;
}