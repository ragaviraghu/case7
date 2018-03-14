#include <iostream>
using namespace std;
int main()
{int N,M,difference;
cout<<"Enter the number1 : "<<endl;
cin>>N;
cout<<"Enter the number2 : "<<endl;
cin>>M;
difference=N-M;
if(difference%2==0)
cout<<"The difference of given two numbers is even "<<endl;
else
cout<<"The difference of given two numbers is odd "<<endl;
return 0;
}
