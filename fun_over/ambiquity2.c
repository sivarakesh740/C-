#include<iostream>
using namespace std;
void fun(int x)
{
	cout<<"fun function"<<endl;
}
/*void fun(int &x)
{
	cout<<"fun &function"<<endl;
}*/
int main()
{
	int x=10;
	fun(10);
//	fun(x);
}
