#include<iostream>
using namespace std;
/*int main()
{
bool x,y;
x=true;
y=false;
cout<<"x="<<x<<"y="<<y<<endl;
}*/



bool process();
int main()
{
bool accept;
accept=process();
if(accept==true)
cout<<"process is continue..."<<endl;
else
cout<<"process is terminated.."<<endl;
}
bool process()
{
char answer;
cout<<"do you want to continue the process(y/n)"<<endl;
cin>>answer;
if(answer=='y')
return true;
else
return false;
}


