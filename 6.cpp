#include<iostream>
using namespace std;
class k
{
  public:
    int x;
};
class r:k
{
  public:
    int y;
    void setdata()
    {
      x=11;
    }
    void print()
    {
       cout<<"x="<<x<<"y="<<y<<endl;
    }
};
int main()
{
/*  k m;
  m.x=10;*/
r l;
//l.x=12;
l.y=22;
l.setdata();
l.print();
  }

  
