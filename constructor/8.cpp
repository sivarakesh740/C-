#include<iostream>
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
    B():y(10) 
    {
        cout<<"constructor-B"<<endl;
    }
    B(int a):y(a)
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
    C():z(10) 
    {
        cout<<"constructor-C"<<endl;
    }
    C(int a):z(a)
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
    D():m(10) 
    {
        cout<<"constructor-D"<<endl;
    }
    D(int a):m(a)
    {
        cout<<"parameter-D"<<endl; 
    }
    ~D()
    {
       cout<<"destructor-D"<<endl;
    }
};
