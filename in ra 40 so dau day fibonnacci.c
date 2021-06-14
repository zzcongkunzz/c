#include<stdio.h>
void main()
{
    long long int a[80],i,tong;
    a[1]=1;
    a[2]=1;
    for(i=1;i<=80;i++)
    {
        if(i>2)
            a[i]=a[i-1]+a[i-2];
        printf("\na[%d]=%d ",i,a[i]);
    }
}
