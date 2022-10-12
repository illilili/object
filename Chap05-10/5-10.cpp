#include <iostream>
#include <cstring>
using namespace std;
#pragma warning(disable : 4996)

class Person { 
	char* name;
	int id;
public:
	Person(int id, char *name); 
	~Person();
	void changeName(char *name);
	void show() { cout << id << ',' << name << endl; }
};
Person::Person(int id, const char* name) { 
	this->id = id;
	int len = strlen(name); 
	this->name = new char[len + 1]; 
	strcpy(this->name, name); 
}
Person::~Person() {
	if (name) 
		delete[] name; 
}
void Person::changeName(const char* name) { 
	if (strlen(name) > strlen(this->name))
		return;
	strcpy(this->name, name);
}

int main() {
	Person father(1, "Kitae");
	Person daughter(father);
	cout << "daughter 객체생성직후----" << endl;
	father.show();
	daughter.show();
	const daughter.changeName("Grace"); 
	cout << "daughter 이름을Grace로변경한후----" << endl;
	father.show();
	daughter.show();
	return 0;
}