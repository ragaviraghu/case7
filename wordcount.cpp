#include<iostream>
using namespace std;
int main()
{
string str;
int len,i,count=0;
cout<<"Enter the string : "<<endl;
getline(cin,str);
len=str.size();
for(i=0;i<len;i++)
{
if(str[i]==' ')
{
 count++;
}
}
cout<<"Number of words in the given string are : "<<count+1<<endl;
return 0;
}
