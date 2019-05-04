#include<iostream>
using namespace std;
const int& fun()//invalid
{
return 10;
}
int main()
{
 int x=fun();
 cout<<"x="<<x<<endl;
}

/*int fun()//valid
{
return 10;
}
int main()
{
 int x=fun();
 cout<<"x="<<x<<endl;
}*/

/*int& fun()//valid
{
int r=10;
return r;
}
int main()
{
 int x=fun();
 cout<<"x="<<x<<endl;
}*/

/*int fun()
{
int r=10;
return r;
}
int main()
{
 int x=fun();
 cout<<"x="<<x<<endl;
}*/
