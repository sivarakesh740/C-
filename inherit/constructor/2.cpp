#include<iostream>
using namespace std;
class k
{
 public:
    int x;
    k():x(10)
    {
      cout<<"constructor-A"<<endl;
    }
    ~k()
    {
      cout<<"destructor-A"<<endl;
    }
};
class r:public k
{
 public:
    int y;
    //r():x(10),y(20)
    r():y(11)
    {
       cout<<"contructor-B"<<endl;
    }
    ~r()
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
  r obj;
}
