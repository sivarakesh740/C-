#include<iostream>
using namespace std;
class a
{
  int *p;
 public:
  a()
  {
    cout<<"contructor"<<endl;
      p=new int[5];
    cout<<"p="<<p<<endl;
    for(int i=0;i<5;i++)
      p[i]=i+5;
  }
 void print()
 {
  for(int i=0;i<5;i++)
  cout<<p[i]<<" ";
  cout<<endl;
 }
 ~a() 
 {
   cout<<"destructor"<<endl;
   delete p;
  }
}; 
/*int main()
{ 
  {
   a obj1;
   obj1.print();
  }
 a obj2;
 obj2.print();
}*/
int main()
{
 a *obj1_ptr=new a;
   obj1_ptr->print(); 
 //    delete obj1_ptr;
}


























/*class a
{
  int x,y;
 public:
    a()
    {
       cout<<"contructor"<<endl;
    }
    ~a()
    {
        cout<<"destructor"<<endl;
    }
};
int main()
{
  a obj1,obj2,obj3;
}*/
      
