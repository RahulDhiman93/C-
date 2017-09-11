//add 2 no using pointers
#include<iostream>
using namespace std;
main()
{
int *c,b,e;
int *d,a;
cout<<"enter the value of a and b"<<endl;
cin>>b;
cin>>e;
c=&b;
d=&e;
a=*c+*d;
cout<<a;
}
