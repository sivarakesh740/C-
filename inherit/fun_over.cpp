#include<iostream>
using namespace std;
class A
{
  public:
     void fun()
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
  B obj;
  obj.fun();
  obj.A::fun();
  
}
