#include<iostream>
/*using namespace std;
namespace A
{
int x=10,y=15;
}
namespace B
{
int x=20,y=40;
}
int main()
{
   //cout<<"x="<<x<<"y="<<y<<endl;
cout<<"A::x="<<A::x<<"A::y="<<A::y<<endl;
cout<<"B::x="<<B::x<<"B::y="<<B::y<<endl;
}*/
using std::cout;
int main()
{
 int x;
 cout<<"enter the x value"<<std::endl;
 std::cin>>x;
 cout<<"x-"<<x<<std::endl;
 cout<<"&x-"<<&x<<std::endl;
}

