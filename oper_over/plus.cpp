#include<iostream>
using namespace std;
class k
{
 int x,y;
 public:
   k(){}
   k(int a,int b):x(a),y(b){}
   k operator+(k &); 
   void print();
};
k k::operator+(k& ob2)
{
  cout<<"binary +operator fun"<<endl;
  k res;
  res.x=x+ob2.y; 
  res.y=y+ob2.x;
  return res;
}
void k::print()
{
cout<<"x="<<x<<"y="<<y<<endl;
}
int main()
{
 k obj1(10,20),obj2(11,22),obj3,obj4;
 obj3=obj1+obj2;
 obj4=obj1+obj2+obj3;
 cout<<"obj1 data:"; 
 obj1.print();
 cout<<"obj2 data:"; 
 obj2.print();
 cout<<"obj3 data:"; 
 obj3.print();
 cout<<"obj4 data:"; 
 obj4.print();
}
