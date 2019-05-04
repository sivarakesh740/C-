#include<iostream>
using namespace std;
int main()
{
 int x=0;
 int &r=x;
 int &k=r;
cout<<"x- "<<x<<endl;
cout<<"r- "<<r<<endl;
cout<<"&X- "<<(unsigned)&x<<endl;
cout<<"k- "<<k<<endl;
cout<<"&r- "<<(unsigned)&r<<endl;
}

