#include <iostream>
#include <string>
using namespace std;
// 원형선언
void star(int a = 5);
void msg(int id, string text = "");
// 함수구현
void star(int a) {
	for (int i = 0; i < a; i++)
		cout << '*';
	cout << endl;
}
void msg(int id, string text) {
	cout << id << ' ' << text << endl;
}

/* void star(inta=5) {
for(inti=0; i<a; i++)
cout<< '*';
cout<< endl;
}
void msg(intid, string text="") {
cout<< id << ' ' << text << endl;
} */  // 동일한 코드 

int main() {
	// star() 호출
	star();
	star(10);
	// msg() 호출
	msg(10);
	msg(10, "Hello");
}