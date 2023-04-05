#include<bits/stdc++.h>
using namespace std;
int Sn(int x);
int main()
{
    
    int k;
    cin>>k;
    cout<<Sn(k);
system("pause");
return 0;
}


int Sn(int x)
{
    double i=1;
    double S=0;
    for(;;i++)
    {
        S+=1/i;
        if(S>x)
        {
            break;
        }
    }
    return i;
}