#include<iostream>
using namespace std;
inline int sum(int,int);
int main()
{
	int x=10,y=20,z;
	z=sum(x,y);
	cout<<"z-"<<z<<endl;
}
int sum(int a,int b)
{
	return a+b;
}

