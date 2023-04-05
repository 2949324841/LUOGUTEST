#include<bits/stdc++.h>
using namespace std;

int arr[10];
int re=0;
int sum=0;

int main()
{
 for(int i=0;i<10;i++)
 {
    cin>>arr[i];
 }
 cin>>re;
 int cd=re+30;
 for(int i=0;i<10;i++)
 {
    if(arr[i]<=cd)
    {
        sum++;
    }
 }
 cout<<sum;

    system("pause");
    return 0;
}