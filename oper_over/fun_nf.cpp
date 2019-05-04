#include<iostream>
using namespace std;
class k
{
  int x,y;
  public:
    k(){}
    k(int a,int b):x(a),y(b){}
    void operator()(int a,int b)
    {
       x=a,y=b;
    }
   void print();
};
void k::print()
{
cout<<"x="<<x<<"y="<<y<<endl;
}
int main()
{
 k obj(10,20);
 obj.print();
 obj(11,22);
 obj.print();
 obj(22,33);
 obj.print();
}
