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

class B
{
  private:
      int x,y;
  public:
      void setdata(int,int);
      void print();
      friend int main();
 
};
  void B::setdata(int a,int b)
  {
    x=a,y=b;
  }
  void B::print()
  {
    cout<<"x="<<x<<"y="<<y<<endl;
  }

class C 
{
  private: 
     int x,y;
  public:
      void setdata(int,int);
      void print();
      friend int main();
};
 void C::setdata(int a,int b)
 {
  x=a,y=b;
 }
 void C::print()
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

 B obj1;
 obj1.setdata(10,20);
 obj1.print();
 obj1.x=22,obj.y=33;
 cout<<"obj1.x="<<obj1.x<<" obj1.y="<<obj1.y<<endl;

 C obj2;
 obj2.setdata(10,20);
 obj2.print();
 obj2.x=22,obj2.y=33;
 cout<<"obj2.x="<<obj2.x<<" obj2.y="<<obj2.y<<endl;
}

