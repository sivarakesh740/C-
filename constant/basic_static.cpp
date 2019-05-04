#include<iostream>
using namespace std;
class k
{
 int x,y;
 static int z;
 public:
 k(int a,int b):x(a),y(b)
 { 
 }
 static void static_print()
 {
  cout<<"in static_print function"<<endl;
 // cout<<"x="<<x<<"y="<<y<<endl;
  cout<<"z="<<z<<endl;
 }
 void non_static_print()
 {
   cout<<"in non-static_print function"<<endl;
   cout<<"x="<<x<<"y="<<y<<endl;
   cout<<"z="<<z<<endl;
 }
};
 int k::z=15;
int main()
{ 
  k obj1(10,20);
  obj1.static_print();
  obj1.non_static_print();
}

