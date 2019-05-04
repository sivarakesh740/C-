#include<iostream>
using namespace std;
struct st
{
 mutable  int x;
 mutable int y;
};

int main()
{
 const st var={1,2};
 var.x=11;
 var.y=22;
cout<<"va.x"<<var.x<<"va.y"<<var.y<<endl;
}
