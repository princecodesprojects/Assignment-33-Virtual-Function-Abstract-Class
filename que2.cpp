#include<iostream>
using namespace std;
#include<math.h>

class Shape
{
    protected:
  double l;
  double w;
   public:
   void get_data(double x,double y=0)
   {
        l=x;
        w=y;
   }
   virtual void display_area()=0;
   
};

class Triangle:public Shape
{
 public:
  void display_area()
  {
     cout<<"Area of Triangle is : "<<(0.5*l*w)<<endl;
  }

};

class Rectangle:public Shape
{
   public:
   void display_area()
   {
      cout<<"Area of Rectangle is : "<<(l*w)<<endl;
   }

};

class Circle:public Shape
{
  public:
  void display_area()
  {
    cout<<"Area of Circle is : "<<3.14*l*l<<endl;
  }
};


int main()
{
  system("cls");
  Triangle t;
  t.get_data(5,2);
  t.display_area();
  Rectangle r;
  r.get_data(5,2);
  r.display_area();

  Circle c;
  c.get_data(5);
  c.display_area();
 


    return 0;
}