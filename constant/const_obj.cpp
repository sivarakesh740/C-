#include<iostream>
using namespace std;
class A
{
  int x,y;
public:
  A(int a,int b):x(a),y(b)
  {
  }
  void print() const;
};
void A::print() const
{ 
// x=10,y=22;
 cout<<"x="<<x<<"y="<<y<<endl;
}
int main()
 {
   const A obj(12,22);
   obj.print();
 }
