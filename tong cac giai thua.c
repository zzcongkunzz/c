#include<stdio.h>
void main()
{
    int N,i,a[100],x;
    long long int tich,tong=0;
    printf("N= ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<=N;i++)
    {
        tich=1;
        for (x=1;x<=a[i];x++)
            tich=tich*x;
        tong=tong+tich;
    }
    printf("tong cac giai thua la:%d ",tong);
}
