#include<iostream>
using namespace std;
/*int main()
{
  char a[29];
  cout<<"enter the string.."<<endl;
  cin.getline(a,sizeof a);
  cout<<"a="<<a<<endl;
}*/
//int y=10;
/*namespace  a
{
int y=20;
}
namespace  b
{
int y=25;
}
int main()
{
 using namespace a;
 cout<<" a::y" <<a::y<<endl;
 using namespace b;
 cout<<" b::y" <<b::y<<endl;
}*/

namespace a
{
 int x=12,y=53;
}
namespace b
{
 int x=23,y=33;
}
int main()
{
 
  using namespace a;
  cout<<"a::x="<<x<<"a::y"<<y<<endl;
 {
 using namespace b;
  cout<<"b::x="<<x<<"b::y"<<y<<endl;
}
}
