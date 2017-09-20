//friend class
#include<iostream>
using namespace std;
class B;
class A
{
friend class B;
int x;
public:
void getdata()
{
cout<<"enter x";
cin>>x;
}
void showdata()
{
cout<<"x="<<x;}
};
class B
{
int y;
public:
void getdata()
{
cout<<"enter y";
cin>>y;
}
void showdata()
{
cout<<"b y="<<y;
}
void swap(A &a)
{
int temp;
temp=a.x;
a.x=y;
y=temp;}};
main()
{
A a;
B b;
a.getdata();
b.getdata();
a.showdata();
b.showdata();
b.swap(a);
cout<<"after swapping";
a.showdata();
b.showdata();}
