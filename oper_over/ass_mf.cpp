#include<iostream>
using namespace std;
class k
{
 int x,y;
 public:
  k(){}
  k(int a,int b):x(a),y(b){}
  k operator=(k&);
  void print();
};
k k::operator=(k &ob)
{
 cout<<"assignment fun"<<endl;
  x=ob.x;
  y=ob.y;
}
void k::print()
{
 cout<<"x="<<x<<"y="<<y<<endl;
}

int main()
{
 k obj(10,20),obj1;
   obj1=obj;
   obj.print();
   obj1.print();
}
