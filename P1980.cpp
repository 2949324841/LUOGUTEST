#include<bits/stdc++.h>
using namespace std;



int main()
{
    
    long link;
    int number;
    int sum=0;
    cin>>link>>number;
    
    for(int i=1;i<=link;i++)
    {
        int temp=i;
        while(temp!=0)
        {
            int tmp=temp%10;
            if(tmp==number)
            {
                sum++;
            }
            temp/=10;
        }
    }
cout<<sum;
    system("pause");
    return 0;
}