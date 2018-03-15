#include<iostream>
#include<string.h>
using namespace std;
int main()
{
string s;
cout<<"Enter the string : "<<endl;
cin>>s;
int i,flag=0,len;
len=s.size();
for(i=0;i<len;i++)
{
if(s[i]=='1'||s[i]=='0')
{
flag=1;
}
else
{
flag=0;
break;
}
}
if(flag==1)
cout<<"Yes(given string is in binary format)"<<endl;
else
cout<<"No";
return 0; 
}
