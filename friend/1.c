#include<iostream>
using namespace std;
class A
{
  private:
      int x,y;
  public:
      void setdata(int,int);
      void print();
      friend int main();
 
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
 obj.setdata(10,20);
 obj.print();
 obj.x=22,obj.y=33;
 cout<<"obj.x="<<obj.x<<" obj.y="<<obj.y<<endl;
}
