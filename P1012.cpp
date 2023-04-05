#include<bits/stdc++.h>
using namespace std;
bool method(string s1,string s2)
{
    return (s1+s2)>(s2+s1);
}
int main()
{
    int num;
    cin>>num;
    int max;

    string arr[100];
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    };

    sort(arr,arr+num,method);
    for(int i=0;i<num;i++)
    {
        cout<<arr[i];
    }

    system("pause");
    return 0;
}