#include<iostream>
using namespace std;
class k
{
 int x,y;
 public:
  k(){}
  k(int a,int b):x(a),y(b){}
  k operator++(int ); 
  void print();
};
k k::operator++(int )
{
  cout<<"pre-increment"<<endl;
  k res;
  res.x=x++;
  res.y=y++;
  return res;
}
void k::print()
{
 cout<<"x="<<x<<"y="<<y<<endl;
}

int main()
{
  k obj1(10,20),obj2;
  obj2=obj1++;
  cout<<"obj1 data:"<<endl;
  obj1.print();
  cout<<"obj2 data:"<<endl;
  obj2.print();
}
