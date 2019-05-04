#include<iostream>
using namespace std;
class k
{
  int x,y;
public:
  k():x(10),y(20)
  {
  }
  k* operator->()
  {
    return this;
  }
  void print()
  {
   cout<<"x="<<x<<"y="<<y<<endl;
  }
};
int main()
{
 k obj;
 cout<<"obj data"<<endl;
 obj->print();
}
