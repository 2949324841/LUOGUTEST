#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *arr=new int(100);
    for(int i=0;;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        break;
    }
    int temp;
    for(int j=0;;j++)
    {
        
        if(arr[j]==0)
        {
            temp=j;
            break;
        }
    }
    for(int i=temp-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    system("pause");
    return 0;
}