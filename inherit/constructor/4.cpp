#include<iostream>
using namespace std;
class k
{
  public:
    int x;
};
class b:private k
{
  public:
    int y;
};
int main()
{
  k l;
  l.x=10;
}

