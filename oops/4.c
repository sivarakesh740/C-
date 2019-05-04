#include<iostream>
using namespace std;
class A
{
 private:
   int x,y;
 public:
   void setdata(int,int);
   void print();
   void add(A&,A&);
};
void A::setdata(int a,int b)
{
  x=a,y=b;
}
void A::print()
{
 cout<<"x="<<x<<"y="<<y<<endl;
}
void A::add(A &ob1,A &ob2)
{
  x=ob1.x+ob2.x;
  y=ob1.y+ob2.y;
}
int main()
{
  A obj1,obj2,obj3;
  obj1.setdata(10,20);
  obj1.print();
  obj2.setdata(20,30);
  obj2.print();
  obj3.add(obj1,obj2);
  obj3.print();
}
