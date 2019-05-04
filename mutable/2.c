#include<iostream>
using namespace std;
struct A
{
 int x,y;
 void fun()
 {
   cout<<"fun function\n"<<endl;
 }
}var={10,20};
int main()
{
// A var={10,20};
 //var.x=10;
 //var.y=20;
 cout<<"x="<<var.x<<"Y="<<var.y<<endl; 
 //var.fun();
}
