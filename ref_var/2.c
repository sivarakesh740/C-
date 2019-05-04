#include<iostream>
using namespace std;
int main()
{
int x=10,y=20;
int *p=&x;
int *&rp=p;
rp=&y;
cout<<"X="<<x<<endl;
cout<<"p="<<*p<<endl;
cout<<"rp="<<*rp<<endl;
}
