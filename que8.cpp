#include<iostream>
using namespace std;

class Proof
{
    protected:
  int h,b,p;
  public:
  void setData(int a,int x,int y)
  {
      h=a;
      b=x;
      p=y;
  }
  virtual void proovTriangle()=0;

};

class Compute:public Proof
{
  public:
  void proovTriangle()
  {
    h=h*h;
    int v=(b*b)+(p*p);
    cout<<v<<" "<<h<<endl;
     if(h == v)
     {
        cout<<"Triangle is right angled triangle"<<endl;
     }
     else
     cout<<"Triangle is not right angled triangle"<<endl;
  }

};


int main()
{
  system("cls");
   Compute c;
   c.setData(5,3,3);
   c.proovTriangle();
    return 0;
}