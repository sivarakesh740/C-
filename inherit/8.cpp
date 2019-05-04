#include<iostream>
using namespace std;
class k
{
  int x;
  public:
     void setdata()
     { 
       x=22;
     }
     void print()
     {
       cout<<"x="<<x<<endl;
     }
};
class r:public k
{
 

};
int main()
{ 
  r l;
  l.setdata();
  l.print();
}
