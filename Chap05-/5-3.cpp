#include <iostream>
using namespace std;
int main() {
	cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
	int i = 1;
	int n = 2;
	int& refn = n; // ��������refn����. refn��n�����Ѻ���
	n = 4;
	refn++;
	cout << i << '\t' << n << '\t' << refn << endl;
	refn = i;
	refn++;
	cout << i << '\t' << n << '\t' << refn << endl;
	int* p = &refn; // p��refn���ּҸ�����
	*p = 20;
	cout << i << '\t' << n << '\t' << refn << endl;
}