#include<bits/stdc++.h>
using namespace std;
int n,s;
int main()
{
    s=0;
    cin>>n;
    while(n)
    {
        s=s*10+n%10;
        n/=10;
    }
    cout<<s;
    system("pause");
    return 0;
}