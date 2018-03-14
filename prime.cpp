#include<iostream>
using namespace std;
int main()
{int n,flag=0;
cout<<"Enter the number : "<<endl;
cin>>n;
for(int i=2;i<n;i++)
{ if(n%i==0)
{flag++;
break;
}
}
if(flag==0)
{cout<<"The given number is a prime number(Yes)."<<endl;
}
else
{cout<<"The given number is not a prime number(No)."<<endl;
}
return 0;
}
