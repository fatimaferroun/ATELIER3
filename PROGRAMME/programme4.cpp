#include<iostream>
using namespace std;
class mére{
	public:
		void display(){
		cout<<"mére";
}
};
class fille:public mére{
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
