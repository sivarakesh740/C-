#include<iostream>
using namespace std;
const int &fun()
{
  return 11;
}
int main()
{
  int x=fun();
  cout<<"x="<<x<<endl;
}
