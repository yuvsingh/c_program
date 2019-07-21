#include<stdio.h>
void mmin(int*z,int*p,int*q)
{
    int i=0;int n=7;
    *p=*z;
    *q=*z;
    for(i=1;i<n;i++)
    {
        if(*(z+i)>*p)
        {
            *p=*(z+i);
        }
    }
}

void main()
{
    int ar[50]={1,42,13,4,5,77,88};
    int max,min;
    mmin(ar,&max,&min);
    printf("%d,%d",max,min);
}
