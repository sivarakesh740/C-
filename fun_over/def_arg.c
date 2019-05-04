/*#include<iostream>
using namespace std;
int sum(int x,int y=0,int z=0,int m=0)
{
   return x+y+z+m;
}
int main()
{
	cout<<"sum="<<sum(5)<<endl;
	cout<<"sum="<<sum(2,4)<<endl;
	cout<<"sum="<<sum(5,6,7)<<endl;
	cout<<"sum="<<sum(9,5,7,3)<<endl;
}*/
#include<iostream>
using namespace std;
int sum(int,int =0,int=0,int =0);
int main()
{
	cout<<"sum="<<sum(5)<<endl;
	cout<<"sum="<<sum(2,4)<<endl;
	cout<<"sum="<<sum(5,6,7)<<endl;
	cout<<"sum="<<sum(9,5,7,3)<<endl;
}
int sum(int x,int y,int z,int m)
//int sum(int x,int y=0,int z=0,int m=0)
{
   return x+y+z+m;
}
