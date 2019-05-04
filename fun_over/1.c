#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
 int temp;
	temp=x,x=y,y=temp;
}
void swap(char &x,char &y)
{
 char  temp;
	temp=x,x=y,y=temp;
}
void swap(float &x,float &y)
{
 float temp;
	temp=x,x=y,y=temp;
}
int main()
{
        int x=10,y=20;
	char ch1='A',ch2='B';
	float f1=22.7,f2=2.5;
	swap(x,y);
	swap(ch1,ch2);
	swap(f1,f2);
cout<<"x="<<x<<"y="<<y<<endl;
cout<<"ch1="<<ch1<<"ch2="<<ch2<<endl;
cout<<"f1="<<f1<<"f2="<<f2<<endl;
}


