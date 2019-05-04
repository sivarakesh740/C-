//hybrid inheritance

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
class B:public A
{ 
  protected:int y; 
  public:
  B():y(11)
  {
     cout<<"contructor-B"<<endl;
  }
  B(int a,int b):A(a),y(b)
  {
     cout<<"parameter -B"<<endl;
  }
  ~B()
  {
     cout<<"destructor-B"<<endl;
  }
  void print()
  {
    cout<<"x=" <<x<<"y=" << y<<endl;
  }
};

class C:public A
{ 
  protected:int z; 
  public:
  C():z(12)
  {
     cout<<"contructor-C"<<endl;
  }
  C(int a,int b):A(a),z(b)
  {
     cout<<"parameter -C"<<endl;
  }
  ~C()
  {
     cout<<"destructor-C"<<endl;
  }
  void print()
  {
    cout<<"x=" <<x<<"z=" <<z <<endl;
  }
};
class D:public A
{ 
  protected:int m; 
  public:
  D():m(13)
  {
     cout<<"contructor-D"<<endl;
  }
  D(int a,int b):A(a),m(b)
  {
     cout<<"parameter-D"<<endl;
  }
  ~D()
  {
     cout<<"destructor-D"<<endl;
  }
  void print()
  {
    cout<<"x=" <<x<<"m=" <<m <<endl;
  }
};

int main()
{
  D obj1;
  obj1.print();
  D obj11(11,22);
  obj11.print();
  
  C obj2;
  obj2.print();
  C obj22(33,44);
  obj22.print();

  B obj3;
  obj3.print();
  B obj33(55,66);
  obj33.print();
}
