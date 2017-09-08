#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
const int MAX=50;
class infix()
{
private:
    char target[MAX],stack[MAX];
    char *s,*t;
    int top;
public:
    infix();
    void setptr(char *s);
    void push(char c);
    char pop();
    void convert();
    int priority(char c);
    void show();
};
int main()
{
    char expn[MAX];
    infix q;
    cout<<"Enter expression:\n";
    cin.getline(expn,MAX);
    q.setptr(expn);
    q.convert();
    cout<<"Postfix:\t";
    q.show();
    return 0;
}
infix::infix()
{
    top=-1;
    strcpy(target,"");
    strcpy(stack,"");
    t=target;
    s=stack;
}
void infix::setptr(char *str) {
    s=str;
}
void infix::push(char c)
{
    if (top==MAX) {
        cout<<"stack is full";
    }
    else
    {
        top++;
        stack[top]=c;
    }
}
char infix::pop()
{
    if (top==-1) {
        std::cout << "stack is empty" << '\n';
        return -1;
    }
    else{
        char item=stack[top];
        top--;
        return item;
    }
}
