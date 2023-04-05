#include<bits/stdc++.h>
#include<String.h>
using namespace std;

signed main()
{
    char s[10];
    int count=0;
    gets(s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]>='0'&&s[i]<='9')
        count++;
    }
    cout<<count;
    system("pause");
    return 0;
}