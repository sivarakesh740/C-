#include<iostream>
using namespace std;
class A
{
 int *p;
public:
A()
 {
  cout<<"contructor"<<endl;
  p=new int [5];
  cout<<"p="<<p<<endl;
  for(int i=0;i<5;i++)
  p[i]=i+10;
 } 
void print()
{
 for(int i=0;i<5;i++)
 cout<<p[i]<<" ";
 cout<<endl;
}
~A()
{
 cout<<"destructor"<<endl;
 delete p;
}
};

int main()
 {
  { 
     A obj1;
     obj1.print();
  }
 A obj2;
 obj2.print();

   }  
