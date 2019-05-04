#include<iostream>
using namespace std;
class A
{
  public:
     virtual void fun()
     {
        cout<<"class-A fun function"<<endl;
     }
};
class B:public A
{
  public:
    void fun()
     {
        cout<<"class-B fun function"<<endl;
     }
};
int main()
{
 A *bptr; 
 A a;
 bptr=&a;
 bptr->fun();
 
 B b;
 bptr=&b;
 bptr->fun();
}
  
