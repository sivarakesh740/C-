#include<iostream>
using namespace std;
class A
{
 mutable  int x;
  int y;
public:
 void setdata(int a,int b);
 void modify() const;
 void print();
};
 void A::setdata(int a,int b)
 {
   cout<<"setdata fun"<<endl;
   x=a,y=b;
 }
 void A::modify()const
 {
   cout<<"content modify"<<endl;
   x=15;
//   y=12;
 }
 void A::print()
 {
   cout<<"print data"<<endl;
   cout<<"x="<<x<<"y="<<y<<endl;
 }

int main()
{
  A obj;
  obj.setdata(10,20);
  obj.print();
  obj.modify();
  obj.print();
}
