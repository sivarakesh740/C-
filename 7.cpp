#include<iostream>
using namespace std;
class k
{
// protected:
 private:
 int x;
};
class m: k
{
  private:
    int y;
  public:
     void setdata() 
     {
        x=11;
        y=13;
     }
     void print()
     {
        cout<<"x="<<x<<"y="<<y<<endl;
     }
};

int main()
{
  m r;
 r.setdata(); 
 r.print();
}
