//exception handling
#include<iostream>
using namespace std;
main()
{
int a,b;
cout<<"enter a and b";
cin>>a>>b;
int x=a-b;
try
{
if(x!=0)
cout<<"result of a/x is"<<a/x<<endl;
else
throw x;
}
catch(int i)
{
cout<<"exception caught x="<<a<<endl;}
cout<<"exit main";}
