//快速排序 分治法
#include<bits/stdc++.h>
using namespace std;
/*快速思路:

给出未排序的数组,不能一次性排序完所有元素,但可以一次给出一位元素的最终位置,
将比该元素小的排到左边,将比该元素大的排到右边
每次对数组中的一个元素归位,再以该元素为边界对左右两边进行同样的操作,直至划分后的两个数组只有一个单位的大小为止.
即将大范围划分为小范围问题解决

*/

void swap(int &a,int &b);
void QuickSort(int *arr,int start,int end);
int main()
{
    int arr[]={3,1,5,2,4,7};
    QuickSort(arr,0,5);
    
    for(int e:arr)
    {
        cout<<e<<" ";
    }
    system("pause");
    return 0;
}


void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void QuickSort(int *arr,int start,int end)
{
    if(start>=end) return;
    int Base=arr[start];
    int i=start;int j=end;

    while(i!=j)
    {
        while(j>i && arr[j]>=Base) j--;
        while(i<j && arr[i]<=Base) i++;
        if(i<j) swap(arr[i],arr[j]);
    }
    arr[start]=arr[i];
    arr[i]=Base;
    QuickSort(arr,start,i-1);
    QuickSort(arr,i+1,end);
}