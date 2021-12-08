
#include <iostream>
using namespace std;
class Shape
{
protected:
  float x, y;
public:
  Shape(float a, float b)
  {
  	//la donne de valeur à la largeur et à la hauteur
    x = a; 
    y = b; 
  }
};
class Rectangle: public Shape //sous-classe
{
public:
  Rectangle(float a, float b) : Shape(a, b) {}
  float area()
  {
    return (x * y); //calcule de l'air
  }
};
class Triangle: public Shape //sous-classe
{
public:
  Triangle(float a, float b) : Shape(a, b) {}
  float area()
  {
    return (x * y / 2);  //calcule de l'air
  }
};
int main (){
  Rectangle rectangle(5,4);
  Triangle triangle(5,4);
  //l'appel du fct area()
  cout << rectangle.area() << endl;   
  cout << triangle.area() << endl;     
  return 0;
}
