#include<bits/stdc++.h>
using namespace std;

struct SumUnhappy
{
    int First;
    int Second;
};

int main()
{
    int UnhappyTime=0;
    int UnhappyLevel=0;
    for(int i=1;i<=7;i++)
    {
        SumUnhappy temp;
        cin>>temp.First>>temp.Second;
        int GetLevel=temp.First+temp.Second;
        if(GetLevel>8&&GetLevel>UnhappyLevel)
        {
            UnhappyLevel=temp.First+temp.Second;
            UnhappyTime=i;
        }
        else;
    }
    cout<<UnhappyTime;

    system("pause");
    return 0;
}