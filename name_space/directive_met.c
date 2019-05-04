#include<iostream>
using namespace std;
namespace A 
{
int x=10,y=20;
}
namespace B
{
int x=15,y=30;
}
/*int main()
{
 using namespace B;
 cout<<"x="<<x<<"y="<<y<<endl;
}*/
/*
int main()
{
 // using namespace A;
 //cout<<"x="<<x<<"y="<<y<<endl;

 using namespace B;//error
 cout<<"x="<<x<<"y="<<y<<endl;
}*/


/*int main()//correct usage
{
{
  using namespace A;
  cout<<"x="<<x<<"y="<<y<<endl;
}
 using namespace B;
 cout<<"x="<<x<<"y="<<y<<endl;
}*/


int main()//invalid usage
{

  using namespace A;
  cout<<"x="<<x<<"y="<<y<<endl;
{
 using namespace B;
 cout<<"x="<<x<<"y="<<y<<endl;
}
}


