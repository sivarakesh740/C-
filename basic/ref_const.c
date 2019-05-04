#include<iostream>
using namespace std;
int main()
{
/*int x=10;---->valid
 int &r=x;*/

/*const int x=10;---->invalid
int &r=x;*/

/*int x; ------->valid
const int &r=x;*/

/*const int x=10;-->valid
const int  &r=x;*/


cout<<"x="<<x<<"&x="<<(unsigned)&x<<endl;
cout<<"r="<<r<<"&r="<<(unsigned)&r<<endl;
}
