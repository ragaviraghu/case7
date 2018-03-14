#include <iostream>
using namespace std;
int main()
{int N,M,add;
cout<<"Enter the number1 : "<<endl;
cin>>N;
cout<<"Enter the number2 : "<<endl;
cin>>M;
add=N+M;
if(add%2==0)
cout<<"The sum of given two numbers is even "<<endl;
else
cout<<"The sum of given two numbers is odd "<<endl;
return 0;
}
