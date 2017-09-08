#include<iostream>
using namespace std;
int display_menu();
struct node
{
int data;
struct node *prev;
struct node *next;
};
class DLL
{
public:
node *temp,*start;
node *hit;
int count;
DLL()
{
count=0;
start=NULL;
}
void insert();
void insertL();
void display();
};
void DLL::insert()
{
node *newnode;
newnode=new node;
cout<<"enter number : ";
cin>>newnode->data;
temp=start;
if(temp==NULL)
{
start=newnode;
newnode->next=NULL;
newnode->prev=NULL;
return;
}
else
{
newnode->next=temp;
newnode->prev=NULL;
temp->prev=newnode;
start=newnode;
}
}
void DLL::insertL()
{
node *newnode;
newnode=new node;
cout<<"enter number : ";
cin>>newnode->data;
if(count==0){
temp=start;
}
else
{
temp=hit;
}
if(temp==NULL)
{
start=newnode;
newnode->prev=NULL;
newnode->next=NULL;
return;
}
else
{
newnode->next=NULL;
newnode->prev=temp;
temp->next=newnode;
temp=newnode;
hit=temp;
count++;
}
}
void DLL::display()
{
node *tail;
temp=start;
if(start==NULL)
{
cout<<"list is empty";
}
cout<<"BACKWARD DIRECTION : ";
while(temp!=NULL)
{
cout<<temp->data<<" ";
if(temp->next==NULL)
{
tail=temp;
}
temp=temp->next;
}
temp=tail;
cout<<"FORWARD DIRECTION : ";
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->prev;
}
}
int display_menu()
{
int n,l;
cout<<"choose what to do : "<<endl;
cout<<"1 for insert at first "<<endl;
cout<<"2 for insert at last "<<endl;
cin>>n;
return n;
}
main()
{
if(display_menu()==1)
{
    int l;
DLL ob;
cout<<"LINK LIST LENGTH : ";
cin>>l;
for(int i=0;i<l;i++){
ob.insert();
}
ob.display();
}
else if(display_menu()==2)
{
    int l;
DLL ob;
cout<<"LINK LIST LENGTH : ";
cin>>l;
for(int i=0;i<l;i++){
ob.insertL();}
ob.display();
}
else
{
cout<<"ERROR 404 :: ONLY 1 OR 2 YOU IDIOT";
}
}
