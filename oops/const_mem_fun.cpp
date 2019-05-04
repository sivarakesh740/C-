#include<iostream>
using namespace std;
class a
{
  mutable int x;
  mutable int y;
public:
   void setdata(int a,int b);
   void modify() const;
   void print();
};
  void a::setdata(int a,int b)
   {
     cout<<"enter the setfunction"<<endl;
        x=a,y=b;
   }
   void a:: modify() const
   {
        x=15;
        y=23;
   }
  void a:: print()
  {
   cout<<"x="<<x<<"y="<<y<<endl;
  }
int main()
{
 a obj;
 obj.setdata(10,20);
 obj.modify();
 obj.print();
}
