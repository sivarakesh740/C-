/*#include<iostream>
using namespace std;
void swap(int *p,int *q);
int main()//using pointer
{
int x=10,y=20;
cout<<"before swap"<<endl;
cout<<"x- "<<x<<endl<<"y-"<<y<<endl;
swap(&x,&y);
cout<<"after swap"<<endl;
cout<<"x- "<<x<<endl<<"y-"<<y<<endl;
}
void swap(int *p,int *q)
{
 int temp;
 temp=*p,
 *p=*q,
 *q=temp;
}*/

#include<iostream>
using namespace std;
void swap(int &,int &);//using ref_var
main()
{
int x=10,y=20;
cout<<"before swap"<<endl;
cout<<"x- "<<x<<endl<<"y-"<<y<<endl;
swap(x,y);
cout<<"after swap"<<endl;
cout<<"x- "<<x<<endl<<"y-"<<y<<endl;
}
void swap(int &p,int &q)
{
int temp;
temp=p,p=q,q=temp;
}

