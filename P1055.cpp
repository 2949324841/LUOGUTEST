#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[20];
    int x;
    int count=1;
    gets(s);
    for(int i=0;i<strlen(s)-1;i++)
    {
        if(/*s[i]>='0'&&s[i]<='9'*/s[i]!='-')
        {
            x+=(s[i]-48)*count;
            count++;
        }
    };

    x%=11;
    
    if(x==(int)(s[12]-'0')&& s[12]>='0' &&s[12]<='9' ||x==10 &&s[12]=='X')
        cout<<"Right";
    else
    {
        
        for(int i=0;i<strlen(s)-1;i++)
        {
            cout<<s[i];
        }
        if(x==10)
        {
            cout<<'X';
        }
        else
        {
            cout<<x;
        }
    };
    system("pause");
    return 0;
}