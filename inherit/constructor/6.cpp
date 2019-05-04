//mutltiple inheritance
#include<iostream>
using namespace std;
class A
{ 
  protected:int x; 
  public:
  A():x(10)
  {
     cout<<"contructor-A"<<endl;
  }
  A(int a):x(a)
  {
     cout<<"parameter -A"<<endl;
  }
  ~A()
  {
     cout<<"destructor-A"<<endl;
  }
};
class B
{
  protected:int y; 
  public:
  B():y(11)//m():k(),y(11)
  {
     cout<<"contructor-B"<<endl;
  }
  B(int b):y(b)
  {
     cout<<"parameter -B"<<endl;
  }
  ~B()
  {
     cout<<"destructor-B"<<endl;
  }
};

class C
{
  protected:int z; 
  public:
  C():z(22)//n():b(),z(33)
  {
     cout<<"contructor-C"<<endl;
  }
  C(int c):z(c)
  {
     cout<<"parameter -C"<<endl;
  }
  ~C()
  {
     cout<<"destructor-C"<<endl;
  }
};
class D:private A,private B,private C
{
  public:
   int m;
  D():m(20)
  {
      cout<<"constructor-D"<<endl;
  }
  D(int a,int b,int c,int d):A(a),B(b),C(c),m(d)
  {
     cout<<"destructor-D"<<endl;
  }
  ~D()
  {
      cout<<"destructor-D"<<endl;
  }
  void print()
  {
     cout<< "x="<<x<< "y="<<y<< "z="<<z<< "m="<<m<<endl;
  }
};

int main()
{
   D obj1;
   obj1.print();
   D obj2(40,50,60,70);  
   obj2.print();
}
