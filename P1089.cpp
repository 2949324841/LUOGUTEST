#include<bits/stdc++.h>
using namespace std;



int main()
{
    int array[13];
    int i=1;
    while(i<=12)
    {
        cin>>array[i];
        i++;
    }
    // while(j<=12)
    // {
    //     cout<<array[j]<<" ";
    //     j++;
    // }

    
    //Fuc(array);
     int Leave=0; //余额
        int Sum=0; //妈妈手里的钱
        bool flag=0; //是否亏损
        int deathmonth=0; //死亡月份;
        for(int i=1;i<=12;i++)
        {
            Leave+=300;
            Leave-=array[i];
            if(Leave<0)
            {
                flag=1;
                deathmonth=i;
            }
            else{
                int temp=0;
                temp=(Leave/100)*100;
                Leave-=temp;
                Sum+=temp;
            }
            if(flag==1)
            {
                cout<<"-"<<deathmonth;
                break;
            }
            if(i==12)
            {
                cout<<Sum*1.2+Leave;
            }
            
        }
    system("pause");
    return 0;
}

int WriteArray(int arr[12])
{
    int i=1;
    while(i<=12)
    {
        cin>>arr[i];
        i++;
    }
    return 0;
}

void Fuc(int arr[])
{
        int Leave=0;
        int Sum=0;
        for(int i=1;i<=12;i++)
        {
            
            if(Leave<0)
            cout<<"-"<<i;
            else if(Leave>=0)
            {
                Leave+=300;
                int temp=Leave-arr[i];
                temp=temp/100;
                Sum+=temp*100;
                Leave-=temp*100;
                if(i==12)
                {
                    cout<<Sum*1.2;
                }
            }
        }
}