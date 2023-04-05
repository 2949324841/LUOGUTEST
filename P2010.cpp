#include<bits/stdc++.h>
using namespace std;

int main()
{   int year;
    int result;
    int count=0;
    int start_day,end_day;
    int Month[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};

    cin>>start_day>>end_day;

    for(int i=1;i<=12;i++)
    {
        for(int j=1;j<=Month[i];j++)
        {
            year=(j%10)*1000+(j/10)*100+(i%10)*10+(i/10);
            result=year*10000+i*100+j;
            if(result<=end_day&&result>=start_day)
            {
                count++;
            }
            else
            continue;
              
        }
    }
    cout<<count;
    system("pause");
    return 0;
}

