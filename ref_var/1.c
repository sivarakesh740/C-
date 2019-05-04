#include<iostream>
using namespace std;
int main()
{
int x=10;
//int &r=++x;//valid
//int &r=x++;//invalid
const int &r=x+2;
int &m=x;
cout<<"x="<<x<<endl;
cout<<"m="<<m<<endl;
cout<<"r="<<r<<endl;
cout<<"address x="<<(unsigned)&x<<endl;
cout<<"address r="<<(unsigned)&r<<endl;
cout<<"address m="<<(unsigned)&m<<endl;
}
