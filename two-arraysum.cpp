//create two arrays in 2 class and print their sum(friend)
#include<iostream>
using namespace std;
class two;
class one
{
friend class two;
int a[100],n;
public:
one()
{
n=0;}
void get(int p)
{
n=p;
cout<<"enter the elements"<<endl;
for(int i=0;i<n;i++)
cin>>a[i];
}
};
class two
{
int b[100],n;
public:
two()
{
n=0;}
void get(int p)
{
n=p;
cout<<"enter the elements"<<endl;
for(int i=0;i<n;i++)
cin>>b[i];}
void add(one &c,two &d)
{
int bb[100],i;
for(i=0;i<n;i++)
{
bb[i]=c.a[i]+d.b[i];
cout<<bb[i]<<endl;}
}};
main()
{
one c;
two d;
c.get(5);
d.get(5);
d.add(c,d);
}
