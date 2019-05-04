//multi-level

#include<iostream>
using namespace std;
class k
{ 
  protected:int x; 
  public:
  k():x(10)
  {
     cout<<"contructor-A"<<endl;
  }
  k(int a):x(a)
  {
     cout<<"parameter -A"<<endl;
  }
  ~k()
  {
     cout<<"destructor-A"<<endl;
  }
};
class m:public k
{
  protected:int y; 
  public:
  m():y(11)//m():k(),y(11)
  {
     cout<<"contructor-B"<<endl;
  }
  m(int a,int b):k(a),y(b)
  {
     cout<<"parameter -B"<<endl;
  }
  ~m()
  {
     cout<<"destructor-B"<<endl;
  }
};

class n:public m
{
  protected:int z; 
  public:
  n():z(22)//n():b(),z(33)
  {
     cout<<"contructor-C"<<endl;
  }
  n(int a,int b,int c):m(a,b),z(c)
  {
     cout<<"parameter -C"<<endl;
  }
  ~n()
  {
     cout<<"destructor-C"<<endl;
  }
  void print()
  {
     cout<<"x="<<x<<"y="<<y<<"z="<<z<<endl;
  }
};

int main()
{
   n obj1;
   obj1.print();
   n obj2(40,50,60);  
   obj2.print();
}
