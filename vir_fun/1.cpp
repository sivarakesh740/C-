#include<iostream>
using namespace std;
class A
{
  //protected://invalid
  //private://invalid
    public:
    virtual void fun()
    {
        cout<<"class A fun function"<<endl;
    }
};
class B:public A
//class B:private A
//class B:protected A
{
 // public:
    private://valid
    void fun()
    {
        cout<<"class B fun function"<<endl;
    }
};
int main()
{
  A *bptr;
  B v;
  bptr=&v;
  bptr->fun();
}
