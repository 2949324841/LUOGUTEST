#include<bits/stdc++.h>
using namespace std;

int n,m,k,a;//m同时为有空天数及试卷总数,一天一套;
int ddd[1010][1010];
//本质是记录 所有学员 在包括这天之前 做的试卷的数量计数
//抽象做计数
int main()
{

    cin>>n>>m>>k;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)      
        {
            scanf("%d",&a),ddd[a][j]=1;
        }
    }

    for(int i=1;i<=k;i++)
    {
         for(int j=1;j<=m;j++)
            ddd[i][j]+=ddd[i][j-1];
        printf("%d",ddd[i][m]);
    }

system("pause");

    return 0;
}