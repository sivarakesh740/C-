#include<iostream>
using namespace std;
/*int main()
{
string s1,s2;
s1="vector";
s2="india";
s1=s1+s2;
s2=s1+s2;
cout<<"s1="<<s1<<endl;
cout<<"s2="<<s2<<endl;
}*/

/*int main()
{
string str="vector india";
int i;
for(i=0;str[i];i++)
cout<<str[i]<<" ";
cout<<endl;
cout<<"str length()="<<str.length()<<endl;
cout<<"sizeof(String):"<<sizeof(str)<<endl;
}*/

int main()
{
string s1,s2;
cout<<"enter the string1.."<<endl;
cin>>s1;
cout<<"enter the string2.."<<endl;
cin>>s2;
if(s1==s2)
cout<<"string are equal"<<endl;
else if(s1<s2)
cout<<"string2 is greater"<<endl;
else(s1>s2)
cout<<"string1 is greater"<<endl;
}


