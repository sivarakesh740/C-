#include<iostream>
using namespace std;
//struct A
class A
{ 
// private:
   int x,y;
 public:
   void setdata(int,int);
   void  print();
};
void A:: setdata(int a,int b)
{
  x=a,y=b;
}
void A:: print()
{
 cout<<"x="<<x<<"y="<<y<<endl;
}

int main()
{
 A obj;
 obj.setdata(10,20);
 obj.print();
 cout<<"obj.x"<<obj.x<<"obj.y"<<obj.y<<endl;
}
