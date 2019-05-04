#include<iostream>
using namespace std;
class A
{
 public:
   int x,y;
   static int z;
 //  A(int a,int b,int c):x(a),y(b),z(c)
   A(int a,int b,int c):x(a),y(b)
   {
    cout<<"contructor"<<endl;
    z=c;
   }
   void print()
   {
     cout<<"x="<<x<<"y="<<y<<"z="<<z<<endl;
   }
};
  int A::z=15;
int main()
{ 
  A obj1(10,11,12),obj2(11,12,13),obj3(12,13,14);
  cout<<"obj1 data"<<endl;
  obj1.print();
  cout<<"obj2 data"<<endl;
  obj2.print();
  cout<<"obj3 data"<<endl;
  obj3.print();
}
