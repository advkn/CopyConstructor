//Demonstration of custom copy constructor
#include <iostream>
using namespace std;

class MyClass {

private:
	char* str;

public:
	//default ctor
	MyClass() {
		cout << "In constructor..." << endl;
		str = new char(50);
		strcpy(str, "Hello World");
	}

	//copy ctor
	 MyClass(const MyClass &obj) {
		cout << "In copy constructor..." << endl;
		str = new char(50);
		strcpy(str, obj.str);
	}

	void Print() {
		cout << str << endl;
	}
	
	~MyClass() {
		cout << "In destructor..." << endl;
	}

};