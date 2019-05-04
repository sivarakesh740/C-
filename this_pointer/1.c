#include<iostream>
using namespace std;
class A
{
    int x,y;
  public:
    void setdata(int a,int b);
    void print();
};
void A::setdata(int a,int b)
{
 x=a,y=b;
}
void A::print()
{
 cout<<"x="<<x<<"y="<<y<<endl;
}
int main()
{
 A obj;
 obj.setdata(11,22);
 obj.print();
}

