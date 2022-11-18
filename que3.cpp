#include<iostream>
using namespace std;

class Swap
{
 int a;
 public:
  Swap(int a)
  {
    this->a=a;
  }

  void swapValue(Swap *num)
  {
      int t;
      t=a;
       a=num->a;
       num->a=t;
  }

  void display()
  {
    cout<<"a : "<<a<<endl;
    
  }

};


int main()
{
   system("cls");
    Swap s1(2),s2(6);
    s1.display();
    s2.display();
    s1.swapValue(&s2);
    s1.display();
    s2.display();
    return 0;
}