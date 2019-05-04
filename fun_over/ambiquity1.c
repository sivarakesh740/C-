#include<iostream>
using namespace std;
void fun(int x)
{
	cout<<"fun function"<<endl;
}
void fun(int x,int y=13)
{
	cout<<"int fun(int,int)"<<endl;
}
int main()
{
	fun(4);
	fun(3,3);
}
