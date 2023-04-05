#include<bits/stdc++.h>
using namespace std;

struct Pen 
{
    int num;
    int price;
};

int need;

int main()
{
    cin>>need;

    Pen a,b,c;
    cin>>a.num>>a.price;
    cin>>b.num>>b.price;
    cin>>c.num>>c.price;

    int temp_min=1000000;
    int temp;

    if(a.num<need&&need%a.num==0)
    {
        temp_min=(need/a.num)*a.price;
    }
    else if(a.num<need&&need%a.num!=0)
    {
        temp_min=((need/a.num)+1)*a.price;
    }
    else if(a.num>=need)
    {
        temp_min=a.price;
    }



    if(b.num<need&&need%b.num==0)
    {
        temp=need/b.num*b.price;
        if(temp<temp_min)
        temp_min=temp;
       
    }
    else if(b.num<need&&need%b.num!=0)
    {
        temp=((need/b.num)+1)*b.price;
        if(temp<temp_min)
        temp_min=temp;
    }
    else if(b.num>=need)
    {
        temp=b.price;
        if(temp<temp_min)
        temp_min=temp;
        
    }


    if(c.num<need&&need%c.num==0)
    {
        temp=need/c.num*c.price;
        if(temp<temp_min)
        temp_min=temp;
        
    }
    else if(c.num<need&&need%c.num!=0)
    {
        temp=((need/c.num)+1)*c.price;
        if(temp<temp_min)
        temp_min=temp;
    }
    else if(c.num>=need)
    {
        temp=c.price;
        if(temp<temp_min)
        temp_min=temp;
        else
        {

        };
    }

cout<<temp_min;


    system("pause");
    return 0;
}