#include<iostream>
using namespace std;
class k
{
   public:
     int x;
};

class m:protected k
{
   public:
     int y;
};

int main()
{ 
  k d;
  d.x=11;
  m r;
// r.x=22;
  r.y=33;
}
  
