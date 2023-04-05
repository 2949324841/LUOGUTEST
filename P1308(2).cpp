#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string s1;
    string sec;

    getline(cin,s1);
    getline(cin,sec);

    for(int i=0;i<s1.length();i++)
    {
        s1[i]=tolower(s1[i]);
    }
    for(int j=0;j<sec.length();j++)
    {
        sec[j]=tolower(sec[j]);
    };

    s1=' '+s1+' ';
    sec=' '+sec+' ';

    if(sec.find(s1)==string::npos)
    {
        cout<<-1;
    }
    else
    {
        int pos=sec.find(s1);int s=0;
        int temp=sec.find(s1);
        while(temp!=string::npos)
        {
            ++s;
            temp=sec.find(s1,temp+1);
        }
        cout<<s<<" "<<pos<<endl;
    }
    

    system("pause");
    return 0;
}