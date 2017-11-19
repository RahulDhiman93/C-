#include<iostream>
using namespace std;
int main()
{
    int v,e,arr,dct,s;
    cin>>v>>e;
    
    int adj[v][v];
    
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            adj[i][j]=0;
        }
    }
    
    for(int i=0;i<e;i++){
        cin>>arr>>dct;
        adj[arr][dct]=1;
        
    }
    
    cin>>s;
    
    int top=-1;
    int *st, *visited;
    
    st = new int[v]();
    visited = new int[v]();
    
    top++;
    st[top]=s;
    
    while(top!=-1){
        
        int ss=st[top];
        cout<<ss<<" ";
        top--;
        for(int j=0;j<v;j++){
            if(!visited[j] && adj[ss][j]==1){
                top++;
                st[top]=j;
                visited[j]=1;
            }
        }
        
    }
    
}
