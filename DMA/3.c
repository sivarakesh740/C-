#include<iostream>
using namespace std;
int main()
{
 int i,j,r,c;
 cout<<"enter the row & col"<<endl;
 cin>>r>>c;
 int **p;
 p=new int*[r];
 for(i=0;i<r;i++)
 p[i]=new int[c];
 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
	p[i][j]=10+i+j;
 }
 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
	cout<<p[i][j]<<" ";
	cout<<endl;
 }

for(i=0;i<r;i++)
delete []p[i];
delete []p;
}

