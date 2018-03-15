#include <iostream>
using namespace std;
int main() 
{
int N,j=0,p=1;
cout<<"Enter the number : "<<endl;
cin>>N;
while(N!=1)
{
N=N/2;
j++;
}
for(int i=0;i<j+1;i++)
{
p=p*2;
}
cout<<"The nearest greater power of 2 is : "<<p<<endl;
return 0;
}
