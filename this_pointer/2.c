#include<iostream>
using namespace std;
class A
{ 
  private:
     int x,y;
  public:
     void setdata(int x,int y)
     {
       this->x=x,this->y=y;
     }
     int modify()
     {
         x=-x,y=-y;
         return *this;
     }
     void print()
     { 
       cout<<"x="<<this->x<<"y="<<this->y<<endl;
     }
};

int main()
{
 A obj1,obj2;
 obj1.setdata(12,33);
 obj2=obj1.modify();
 cout<<"obj1 data:"<<endl;
 obj1.print();
 cout<<"obj2 data:"<<endl;
 obj2.print();
}
