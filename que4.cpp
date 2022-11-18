#include<iostream>
using namespace std;

class Shape
{
    protected:
   double a,b;
   public:
   void get_data(double x,double y)
   {
      a=x;
      b=y;
   }

   virtual void display_area()=0;

};

class Triangle:public Shape
{
  public:
  void display_area()
  {
     cout<<"Area of triangle is : "<<(a+b)/2.0<<endl;
  }

};

class Rectangle:public Shape
{
  public:
  void display_area()
  {
     cout<<"Area of Rectangle is : "<<a*b<<endl;
  }

};


int main()
{
   system("cls");
  Triangle t;
  t.get_data(2,5);
  t.display_area();
  Rectangle r;
  r.get_data(2,5);
  r.display_area();
    return 0;
}