#include<iostream>
using namespace std;
 class Media{
 	public:
 		string titre;
 		void imprimer();
 		char *id();
}
class Audio:public media{
	
};
class Livre:public media{
	
};
class Press:public media{
	
};
class Cassete:public Audio{
};
class CD:Audio{
};
class Disque:public Audio{
};
class Magazine:public Press{
};
class Journal:public Press{
};
class Revue:public Press{
};
