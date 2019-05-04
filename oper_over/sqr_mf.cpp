#include<iostream>
using namespace std;
class k
{
 int a[5];
 public:
  k()
  {
    for(int i=0;i<5;i++)
      a[i]=i+10;
  }
  int operator[](int index)
  {
    return a[index];
  }
};
int main()
{
  k obj;
  for(int i=0;i<5;i++) 
  cout<<obj[i]<<" ";
  cout<<endl;
}   
