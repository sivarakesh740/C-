#include<iostream>
using namespace std;
class k
{

};
class m:public k
{
  public:
     int x,y;
   void print()
   {
      cout<<"dervied class"<<endl;
   }
};
int main()
{ 
  k r;
  r.print();
}
