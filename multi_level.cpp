#include<iostream>
using namespace std;

class base
{
  public: 
  int x,y;
  public:
    base(){};
    base(int a,int b):x(a),y(b){};
    void print()
    {
       cout<<"x="<<x<<"y="<<y<<endl;
    }
};
class dervied:public base
{
  public: 
   int a,b;
   dervied(){};
    //dervied(int m,int n,int r,int l):base(r,l),a(m),b(n){};
    dervied(int m,int n):a(m),b(n){};
   void fun()
   {
       cout<<"x="<<x<<"y="<<y<<"a="<<a<<"b="<<b<<endl;
   }
};
int main()
{
  base obj1(10,20);
 // dervied obj2(20,30,21,32);
  dervied obj2(20,30);
  obj2.x=10;
  obj2.y=20; 
  obj1.print();
  obj2.fun();
  return 0;
}
