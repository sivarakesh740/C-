#include<iostream>
using namespace std;
int main()
{
int *p=new int[5]{10,20,30,40,50};
cout<<"p="<<p<<endl;
for(int i=0;i<5;i++)
cout<<"p["<<i<<"]="<<p[i]<<endl;
delete []p;
}
