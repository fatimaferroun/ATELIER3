#include<iostream>
using namespace std;
class MyClass{
	public:
		MyClass();
		~MyClass();
};
MyClass::MyClass(){
	cout<<"Default Constructor Invoked"<<endl;
	
}
MyClass::~MyClass(){
	cout<<"Destructor Invoked"<<endl;
	
}
main(){
	MyClass c;
	return 0;
}
