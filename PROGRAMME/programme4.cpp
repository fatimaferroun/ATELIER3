#include<iostream>
using namespace std;
class m�re{
	public:
		void display(){
		cout<<"m�re";
}
};
class fille:public m�re{
	public:
		void display(){
			cout<<"fille";
		}
};
	
}
 main(){
 	fille f;
 	f.display();
 return 0;	
 }
