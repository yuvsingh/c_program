#include<stdio.h>
int main()
{
    int n,i,max=-1;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]>max)
        {
            max=ar[i];
        }
    }
    int count_array[max];
    for(i=0;i<=max;i++)
    {
        count_array[i]=0;
    }
    for(i=0;i<n;i++)
    {
        count_array[ar[i]]++;
    }
    int sum=0;
    for(i=0;i<=max;i++)
    {
        sum+=count_array[i];
        count_array[i]=sum;
    }
    int a[n],x;
    for(i=0;i<n;i++)
    {
        x=count_array[ar[i]]-1;
        a[x]=ar[i];
        count_array[ar[i]]--;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}