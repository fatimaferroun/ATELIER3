#include<iostream>
#include<math.h>

using namespace std;
class complexe{
	int rel;
	int img;
	public:
		complexe();
		complexe(int,int);
		complexe( const complexe&);
		void afficher();
	friend	complexe somme(const complexe&,const complexe&);
	friend	complexe soustraction(const complexe&,const complexe&);
	friend	complexe multiplication(const complexe&,const complexe&);
};
complexe somme(const complexe&,const complexe&);
complexe soustraction(const complexe&,const complexe&);
complexe soustraction(const complexe&,const complexe&);
complexe division(const complexe&,const complexe&);
complexe::complexe(){
	
}
complexe::complexe(int x,int y){
	this->rel=x;
	img=y;
}
complexe::complexe(const complexe& c){
	rel=c.rel;
	img=c.img;
}
void complexe::afficher(){
	cout<<endl<<rel<<"+i"<<img;
}

 complexe somme(const complexe& a,const complexe& b){
 	complexe c(a.rel+b.rel,a.img+b.img);
 	return c;
 }
  complexe soustraction(const complexe& a,const complexe& b){
 	complexe d(a.rel-b.rel,a.img-b.img);
 	return d;
 }
 complexe multiplication(const complexe& a,const complexe& b){
 	complexe d(a.rel-b.rel,a.img-b.img);
 	return d;
 }
 
 
main(){
	complexe c1(3,4),c2(3,4);
	c1.afficher();
	somme(c1,c2).afficher();
	soustraction(c1,c2).afficher();
	multiplication(c1,c2).afficher();
	
	return 0;
	
}
