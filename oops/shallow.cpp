#include<iostream>
#include<cstring>
using namespace std;
class A
{
 char *str;
public:
  A(const char *p)
  { 
   str=new char[strlen(p)+1];
   strcpy(str,p);
  }
  void modify()
  {
    str[0]='s';
  }
  void print()
  {
    cout<<"str="<<str<<endl;
  }
};
int main()
{
 A obj("vector");
 A obj1=obj;
 obj.modify();
 obj1.print();
 obj.print();
}

