#include <iostream>
#include <cstring>
#pragma warning(disable : 4996)

using namespace std;
class Person { 
	char* name;
	int id;
public:
	Person(int id, char* name);
	Person(Person& person); 
	~Person(); 
	void changeName(char* name);
	void show() { cout << id << ',' << name << endl; }
};
Person::Person(int id, char* name) {
	this->id = id;
	int len = strlen(name); 
	this->name = new char[len + 1]; 
	strcpy(this->name, name); 
}
Person::Person(Person& person) { 
	this->id = person.id; 
	int len = strlen(person.name); 
	this->name = new char[len + 1];
	strcpy(this->name, person.name); 
	cout << "��������ڽ���. ������ü���̸�" << this->name << endl;
}
Person::~Person() {
	if (name) 
		delete[] name; 
}
void Person::changeName(char *name) {
	if (strlen(name) > strlen(this->name))
		return; 
	strcpy(this->name, name);
}
int main() {
	Person father(1, "Kitae");
	Person daughter(father);
	cout << "daughter ��ü��������----" << endl;
	father.show();
	daughter.show();
	daughter.changeName("Grace"); 
	cout << "daughter �̸���Grace�κ�������----" << endl;
	father.show();
	daughter.show();
	return 0;
}