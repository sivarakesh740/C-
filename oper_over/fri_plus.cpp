#include<iostream>
using namespace std;
class k
{
 int x,y;
 public:
   k(){}
   k(int a,int b):x(a),y(b){}
   friend k operator%(const k&,k&); 
   void print();
};
 k operator%(const k&ob1,k&ob2)
{
  cout<<"binary +operator fun"<<endl;
  k res;
  res.x=ob1.x%ob2.x; 
  res.y=ob1.y%ob2.y;
  return res;
}
void k::print()
{
cout<<"x="<<x<<"y="<<y<<endl;
}
int main()
{
 k obj1(10,20),obj2(11,22),obj3,obj4;
 obj3=obj1%obj2;
 obj4=obj1%obj2%obj3;
 cout<<"obj1 data:"; 
 obj1.print();
 cout<<"obj2 data:"; 
 obj2.print();
 cout<<"obj3 data:"; 
 obj3.print();
 cout<<"obj4 data:"; 
 obj4.print();
}
