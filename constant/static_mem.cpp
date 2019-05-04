#include<iostream>
using namespace std;
class A
{
 public:
   int x,y;
   static int z;
};
int A:: z=15;

int main()
{
 cout<<"size="<<sizeof(A)<<endl;
 cout<<"A::Z-"<<A::z<<endl;
}
