#include<iostream>
using namespace std;
class k
{
  public:
    int x,y;
};
class dervied:public k
{
 public:
   int m,n;
};
int main()
{ 
  cout<<"sizeof="<<sizeof(k)<<endl;
  cout<<"sizeof="<<sizeof(dervied)<<endl;
  
  k b;
  b.x=10,b.y=10;
  dervied d;
  d.x=11,d.y=11;  
  d.m=20,d.n=20;
  cout<<"b.x-"<<b.x<<"b.y-"<<b.y<<endl;
  cout<<"d.x-"<<d.x<<"d.y-"<<d.y<<endl;
cout<<"d.m-"<<d.m<<"d.n-"<<d.n<<endl;
}
