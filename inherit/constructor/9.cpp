#include<iotream>
using namespace std;
class A
{
 protected:int x;
 public:
   A():x(10)
   {
      cout<<"constructor-A"<<endl;
   }
   A(int a):x(a)
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
 protected:int y;
 public: 
   B():A(),y(b)
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
 protected:int z;
 public: 
   C():A(),z(c)
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
 protected:int m;
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
   cout<<"x="<<x<<endl;
   cout<<"B::x"<<B::x<<endl;
   cout<<"C::x"<<C::x<<endl;
   cout<<"y="<<y<<"z="<<z<<"m="<<m<<endl;
  }
};
int main()
{
  D obj;
  obj.print();
}
