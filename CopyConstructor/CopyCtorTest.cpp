#include "CopyConstructor.h"


void main() {

	MyClass* obj1;
	obj1 = new MyClass();
	obj1->Print();

	MyClass obj2(*obj1);
	delete obj1;

	obj2.Print();

	getchar();

};