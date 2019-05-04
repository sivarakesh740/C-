#include<iostream>
using namespace std;
class A
{ 
 private:
    int x,y;
 public:
   void setdata()
   { 
     cout<<"enter the x,yvalue"<<endl;
     cin>>x>>y;
   }
   void print()
   {
    cout<<"x="<<x<<"y="<<y<<endl;
   }
};
int main()
{
 A obj[3];
 int i;
 for(i=0;i<3;i++)
 obj[i].setdata();
 for(i=0;i<3;i++)
 obj[i].print();
}
