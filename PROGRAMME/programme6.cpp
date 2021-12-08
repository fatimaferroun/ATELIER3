#include<iostream>
using namespace std;
class Personne{
protected:
string nom;
string prénom;
DateTime date_naissance;
personne(string,string,DateTime );	
              polymorpheAficher();
               };
   class Employee:public Personne{
string nom1;   	
string prénom1;
DateTime  date_naissance1;
 double salaire
Employee(string,string,DateTime,string,string,DateTime,double);	
polymorpheAficher();
   };   
   class Chef:public Employee{
   string	 nom2;
   string prénom2;
   DateTime date_naissance2;
   double  salaire1;
string service;
Chef(string,string,DateTime,string,string,DateTime,double,string,string,DateTime,double,string);
polymorpheAficher();	
   }; 
   class Directeur:public Chef{
   	string nom3;
    string  prénom3;
    DateTime date_naissance3;
double salaire2;
 string service1;
  string    accompanée;
Directeur(string,string,DateTime,string,string,DateTime,double,string,string,DateTime,double,string,string,string,DateTime,double,string,string);
polymorpheAficher();	
   };           
