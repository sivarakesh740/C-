#include<iostream>
using namespace std;
class A
{
 public:
  int x,y;
  static int z;
};
  int A::z=25;
int main()
{
  A obj;
 cout<<"size A="<<sizeof(A)<<endl;
 cout<<"A::X"<<A::x<<"B::y"<<A::y<<endl;
 cout<<"A::Z-"<<A::z<<endl;
}
