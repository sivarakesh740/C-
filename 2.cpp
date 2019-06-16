#include<iostream>
using namespace std;
class k
{
  public: 
   int x,y;
  void print()
  {
     cout<<"base class"<<endl;
  }
};
class m:public k
{
  

};
int main()
{
   m r;
   r.print();
}
  
