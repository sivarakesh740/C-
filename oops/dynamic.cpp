#include<iostream>
using namespace std;
class A
{
  int x,y;
public:
  A():x(10),y(20)
  {
    cout<<"default contructor"<<endl;
  }
  A(int a,int b):x(a),y(b)
  {
     cout<<"parameter contructor"<<endl;
  }
  void print()
  {
    cout<<"x="<<x<<"y="<<y<<endl;
  }
};
 int main()
 {
   A *obj1_ptr=new A;
   A *obj2_ptr=new A(11,22);
   cout<<"obj1 data"<<endl;
   obj1_ptr->print();
   obj2_ptr->print();
 
   delete obj1_ptr;
   delete obj2_ptr;
 } 
