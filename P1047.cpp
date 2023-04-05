#include<bits/stdc++.h>
using namespace std;

int main()
{
    int length, num_segments, start, end;
    cin >> length >> num_segments;

    int arr[length+1]; 
    for(int i=0;i<length+1;i++)
    {
        arr[i]=0;
    }

    for(int i = 0; i < num_segments; i++)
    {
        cin >> start >> end;
        // if(start < 0 || end >= length) //check for invalid input
        // {
        //     cout << "Invalid input";
        //     return 0;
        // }
        for(int j = start; j <= end; j++)
        {
            arr[j] = 1; //set array elements within segment to 0
        }
    }

    int count = 0;
    for(int i = 0; i < length+1; i++)
    {
        if(arr[i] == 0)
        {
            count++;
        }
    }

    cout << (count);
    system("pause");
    return 0;
}
