#include<bits/stdc++.h>

using namespace std;
int var=1;
void feedbackf(int n)
{   
       
       for(int i=1;i<=n/2;i++)  // 6-> {1,}->var=2->f(1)->i<=0!->{1,2,}->var=3->f(2)->i<=1->f{1,2{1},}->var=4->f(1)!->var{1,2{1},3}->var=5->f(3)->i<=1->var=6->f{1,2{1},3{1}}
       {
        var++;
        feedbackf(i);
       }
    
}

int main()
{
    
    int n;
    
    cin>>n;
    feedbackf(n);
    cout<<var;

    system("pause");
    return 0;
}

//11111