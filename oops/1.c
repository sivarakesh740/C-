#include<iostream>
using namespace std;
struct A
{
 private:
    int x,y;
 public:
   void setdata(int a,int b)
   { 
      x=a,y=b;
   }
 void print()
 { 
  cout<<"print fun"<<endl;
  cout<<"x="<<x<<"y="<<y<<endl;
 }
};

int main()
{
 A obj;
 obj.setdata(10,20);
 cout<<"obj.data:"<<endl;
 obj.print();
 cout<<"sizeof="<<sizeof(A)<<endl;
// cout<<"in main fun"<<endl;
// cout<<"obj.x="<<obj.x<<endl;
// cout<<"obj.y="<<obj.y<<endl;
}
