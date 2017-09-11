//wap to perform calculator operation divide==0 exception
#include<iostream>
using namespace std;
void add(int a,int b)
{
int c;
c=a+b;
cout<<c;
}
void sub(int a,int b)
{
int c;
c=a-b;
cout<<c;
}
void mutl(int a,int b)
{
int c;
c=a*b;
cout<<c;}
void divide(int a,int b)
{
if(b==0)
throw "divide by zero to an exception";
else
cout<<"result is"<<a/b;}
main()
{
int p,q,r;
cin>>r>>p>>q;
switch (r){
case 1: add(p,q);
break;
case 2: sub(p,q);
break;
case 3: mutl(p,q);
break;
case 4:
try
{divide(p,q);}
catch( const char * message)
{
cout<<message;
break;
}}
}
