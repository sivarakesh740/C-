#include<iostream>
using namespace std;
class k
{
  public:
   int x;
   k(int a):x(a)
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
   int y;
  m(int a,int b):k(a),y(b)
  {  
     cout<<"constructor-B"<<endl;
  }
  ~m()
  {
       cout<<"destructor-B"<<endl;
  }
  void print()
  {
    cout<<"x="<<x<<"y="<<y<<endl;
  }
};

int main()
{ 
  m obj1(10,20);
  obj1.print();
}
