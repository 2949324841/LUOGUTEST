#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{   int count=0;
    int v[100];
    int arr[100];
    int num;
    cin>>num;
    
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
        v[i]=2;
    };
    
    //sort(arr,arr+num,less<int>());
    
    for(int i=0;i<num;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            int result=arr[i]+arr[j];
            for(int x=0;x<num;x++)
            {
                if(arr[x]==result&&x!=i&&x!=j&&v[x]!=1)
                {
                   count++;
                   v[x]=1;
                }
                
            }
        }
    }
    cout<<count;
    system("pause");
    return 0;
}