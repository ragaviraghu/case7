#include<iostream>
#include<string>
using namespace std;
int main()
{
int num,r,multiple;
cout<<"Enter the number : "<<endl;
cin>>num;
r=num%10;
multiple=num-r+10;
cout<<"The nearest greatest multiple of given number is : "<<multiple<<endl;
return 0; 
}
