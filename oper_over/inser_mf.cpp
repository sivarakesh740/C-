#include<iostream>
using namespace std;
class k
{
  int x,y;
public:
 k(int a,int b):x(a),y(b){}
 friend ostream& operator<<(ostream &out,k &ob);
};
 ostream& operator<<(ostream &out,k &ob)
 {
   out<<"x="<<ob.x<<"Y="<<ob.y<<endl;
   return out;
 }

int main()
{
 k obj1(10,20),obj2(11,22),obj3(40,50);
 cout<<obj1<<obj2<<obj3;
}

   

