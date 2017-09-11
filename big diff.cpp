#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int sub[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  int big=arr[0];
    int small=arr[n-1];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>big){
            big=arr[i];
        }
        if(arr[i]<small){
            small=arr[i];
        }
    }
    cout<<big-small<<endl;

}
