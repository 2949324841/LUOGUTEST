#include<bits/stdc++.h>
using namespace std;

void fuc2(int n);

int main()
{
   int n;
   cin>>n;
   fuc2(n);
   system("pause");
    return 0;
}

void fuc2(int n)
{
    int k=1;
    while(n>k)
    {
        n=n-k;
        k++;
    }
    if(k%2==0) cout<<n<<"/"<<(k-n+1);
    else cout<<(k-n+1)<<"/"<<n;
}