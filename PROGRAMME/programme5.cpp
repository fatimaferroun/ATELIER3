#include<iostream>
using namespace std;
class animal{
	public:
	int age;
	char name;
	public:
void set_value();	
	
};
class zebra:public animal{
		public:
	int age1=11;
	string name1="ah";
	public:
void set_value();

	
};	
	

class dolphin:public animal{
		public:
	int age2=11;
	string  name2="jj";
	public:
void set_value( );
};	
	
void zebra::set_value(){
	cout<<"le nom"<<name1;
	 	cout<<"l'age'"<<age1;
	 
};
void dolphin::set_value(){
	cout<<"le nom"<<name2;
	 	cout<<"l'age'"<<age2;
	 
}
main(){
	zebra z;
	dolphin d;
	z.set_value();
		d.set_value();
		return 0;
}

