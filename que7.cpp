#include<iostream>
using namespace std;


class Matrix
{

   protected:
  int a1,a2,b1,b2;
 
};

class calt_determinant:public Matrix
{

  public:
  public:
 calt_determinant(int a,int b,int c,int d)
 {
    a1=a; a2=b; b1=c; b2=d;
 }
  int determinant()
  {
     int d=(a1*b2)-(a2*b1);
     return d;
  }
  
};


int main()
{
   system("cls");
   calt_determinant x(3,5,9,8);
   int d=x.determinant();
   cout<<"Determinant is : "<<d<<endl;
    return 0;
}