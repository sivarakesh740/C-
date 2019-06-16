#include<iostream>
using namespace std;
class A
{
 public:
   int k;
 public:
   A():k(10)
   {
      cout<<"constructor-A"<<endl;
   }
   A(int a):k(a)
   {
      cout<<"parameter-A"<<endl;
   }
   ~A()
   {
      cout<<"destructor-A"<<endl;
   }
};
class B:protected A
{
 protected:
    int y;
 public: 
   B():A(),y(23)
   {
      cout<<"parameter-B"<<endl;
   }
   ~B()
   { 
      cout<<"destructor-B"<<endl; 
   }
};
class C:protected A
{
 protected:
     int z;
 public: 
   C():A(11),z(56)
   {
      cout<<"parameter-C"<<endl;
   }
   ~C()
   { 
      cout<<"destructor-C"<<endl; 
   }
};
class D:public B,public C
{
 protected:
     int m;
 public: 
   D():B(),C(),m(30)
   {
      cout<<"parameter-D"<<endl;
   }
   ~D()
   { 
      cout<<"destructor-D"<<endl; 
   }

void print()
  {
 //  cout<<"x="<<k<<endl;
//   cout<<"B::x"<<B::k<<endl;
   cout<<"C::k"<<C::k<<endl;
   cout<<"y="<<y<<"z="<<z<<"m="<<m<<endl;
  }
};
int main()
{
  D obj;
  obj.print();
}

