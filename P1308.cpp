#include<bits/stdc++.h>
using namespace std;
void compare(char *sec,char* s);
int main()
{
    char c1[10];
    char c2[100000];
    

    gets(c1);
    gets(c2);
   char* s1=strlwr(c1);
   char* s2=strlwr(c2);
    compare(s2,s1);

    
    system("pause");
    return 0;
}

void compare(char *sec,char* s)
{
    int count=0;
    int temp;
    bool first_position_signed=0;
    

    for(int j=0;j<strlen(sec);)
    {
        int marked=0;
        if(sec[j-1]<'a'||sec[j-1]>'z'||!sec[j-1])
        while(sec[j]==s[marked])
        {   int position=j;
            
            if(marked==(strlen(s)-1)&&(sec[j+1]<'a'||sec[j+1]>'z'))
            {
                count++;
                if(first_position_signed==0)
                {
                    temp=position-strlen(s)+1;
                    first_position_signed=1;
                }   
            }
            marked++,j++;
        };
        
        j++;
    }

    if(count==0)
    {
        cout<<-1;
        return;
    }

    cout<<temp<<" "<<count;
}
