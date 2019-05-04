#include<iostream>
using namespace std;
class k
{
  public:
    k()
    {
         cout<<"constructor-A"<<endl;
    }
    ~k()
    {
        cout<<"destructor-A"<<endl;
    }
};
class m:public k
{
   public:
   m()
   {
       cout<<"contructor-B"<<endl;
   }
   ~m()
   {
      cout<<"destructor-B"<<endl;
   }
};
int main()
{
  k  obj1;
} 
