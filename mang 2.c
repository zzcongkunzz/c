#include<stdio.h>
void main()
{
    int N,i,a[1000],tong=0;
    printf("nhap N ");
    scanf("%d",&N);
    for (i=1;i<=N;i++)
        a[i]=i;
    for (i=1;i<=N;i++)
        tong=tong+a[i];
    printf("tong la:%d ",tong);
}


