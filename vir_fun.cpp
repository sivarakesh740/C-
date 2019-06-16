#include<iostream>
using namespace std;
class A
{
  public: 
    int x; 
  A(int a):x(a){}
  virtual void print()
  {
     cout<<"class -A printf fun"<<endl;
  }
};
class B:public A
{
 public:
    int y;
  B():A(10),y(30){}
  void print()
  {
       cout<<"class-B print fun"<<endl;
       cout<<"x="<<x<<"y="<<y<<endl;
  }
};
int main()
{
  A *bptr; 
  B b;
  bptr=&b;
  bptr->print();
}


