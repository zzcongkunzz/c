#include<stdio.h>
void main()
{
    int N,a[10000],i,tong=0;
    printf("N=");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<=N;i++)
        tong=a[i]+tong;
    printf("tong la:%d",tong);
}
