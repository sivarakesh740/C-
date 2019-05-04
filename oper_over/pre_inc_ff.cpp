#include<iostream>
using namespace std;
class k
{
 int x,y;
 public:
  k(){}
  k(int a,int b):x(a),y(b){}
  friend k operator++(k&); 
  friend k operator++(k&,int);
  void print();
};
/*k operator++(k&obj)
{
  cout<<"pre-increment"<<endl;
  k res;
  res.x=obj.x++;
  res.y=obj.y++;
  return res;
}*/
k operator++(k&obj)
{
  cout<<"pre-increment"<<endl;
  k res;
  res.x=++obj.x;
  res.y=++obj.y;
  return res;
}
void k::print()
{
 cout<<"x="<<x<<"y="<<y<<endl;
}

int main()
{
  k obj1(10,20),obj2,obj3;
  obj2=++obj1;
  obj3=++obj2;
  cout<<"obj1 data:"<<endl;
  obj1.print();
  cout<<"obj2 data:"<<endl;
  obj2.print();
  cout<<"obj3 data:"<<endl;
  obj3.print();
}
