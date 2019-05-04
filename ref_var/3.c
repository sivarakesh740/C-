#include<iostream>
using namespace std;
void fun(const int &y);
int main()
{
int x=10;
cout<<"x="<<x<<"&x="<<(unsigned)&x<<endl;
fun(x);
fun(10);
}
void fun(const int &y)
{
cout<<"y="<<y<<"&y="<<(unsigned)&y<<endl;
}
