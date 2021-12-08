#include<iostream>
using namespace std;
class test{
	public:
		void call(){
			static int i=1;
			cout<<"la fonction est appelle:"<<i++<<"fois" ;
			
		}
};
int main(){
	test b;
	b.call();
	b.call();
	return 0;
}
