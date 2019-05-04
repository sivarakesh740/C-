#include<iostream>
using namespace std;
class k
{
  static int c;
  k()
  {
   cout<<"contruct"<<endl;
   c++;
  }
  public:
  static void print() 
  {
   cout<<"no of times of atm being processed"<<endl;
  }
  static void atm_fun()
  {
    cout<<"atm_fun function"<<endl; 
    k log;
  }
};

int main()
{
  char ch;
  do 
  {
     k::atm_fun();
     cout<<"do you want to access atm(y/n)"<<endl;
     cin>>ch;
  }while((ch=='y')||(ch=='Y'));
  k::print();
}
