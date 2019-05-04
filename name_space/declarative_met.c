#include<iostream>
using namespace std;
/*namespace A
{
int x=10,y=20;
}
namespace B
{
int x=24,y=32;
}
int main()
{
  using A::x;
  using B::y;
  cout<<"x="<<x<<"y="<<y<<endl;
}*/

namespace first
{
 int x=10;
 struct st
 {
  int a;
 }v={10};
 void fun()
 {
  cout<<"first fun function"<<endl;
 }
}
namespace second
{
 int x=11;
 struct st
 {
  int a;
 }v={11};
 void fun()
 {
  cout<<"second fun function"<<endl;
 }
}
  int main()
{
/* cout<<"first::x="<<first::x<<endl;
 cout<<"first::v.a="<<first::v.a<<endl;
 first::fun();
                 1st method
 cout<<"second::x="<<second::x<<endl;
 cout<<"second::v.a="<<second::v.a<<endl;
 second::fun();*/
 
/* using first::x;
 using second::v;
 using second::fun;//declarative 
 cout<<"x="<<x<<"v.a"<<v.a<<endl;*/

 using namespace first;
//directive 
 cout<<"x="<<x<<"v.a"<<v.a<<endl;
}





 
