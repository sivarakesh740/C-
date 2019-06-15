#include<iostream>
using namespace std;

class singleton
{
  private:
   static singleton *instance;
   singleton()
     {
          cout<<"object is created"<<endl;
     };
  public:
     static singleton* getinstance()
     {
           if(instance==NULL)
           {
              instance=new singleton();
              cout<<"instance is created"<<endl;
           }
           else
           {
              cout<<"instance cannot creted "<<endl;
           }
      }
};
singleton* singleton::instance=NULL;

int main()
{
   //singleton* obj=singleton::getinstance();
  // singleton* obj=new singleton();
   singleton* obj1=singleton::getinstance();
   return 0;
}
