#include<iostream>
#include<clocale>
using namespace std;
/*int main()
{
 wchar_t wc='A';
 cout<<"size:"<<sizeof(wchar_t)<<endl;
 cout<<"wc="<<wc<<endl;
 cout<<"wc="<<(char)wc<<endl;
}*/

/*int main()
{
//wchar_t wc=0x5104;
wchar_t wk=0x0b93;
setlocale(LC_ALL,"");
//wcout<<wc<<endl;
wcout<<wk<<endl;
}
*/
int main()
{
wchar_t s[20]={0x0b93,' ',' ',0x0b87,' ',' ',0x0bf5};
setlocale(LC_ALL,"");
wcout<<s<<endl;
wcout<<"size:"<<sizeof(wchar_t)<<endl;
}
