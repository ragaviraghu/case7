#include<iostream>
using namespace std;
int main()
{
string s;
int k;
cout<<"Enter the string : "<<endl;
getline(cin,s);
cout<<"Enter the k value : "<<endl;
cin>>k;
for(int i=0;i<k;i++)
{
cout<<s[i];	
}
return 0;
}
