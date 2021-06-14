#include<stdio.h>
void main()
{
    int N,i,a[100];
    printf("N= ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<=N;i++)
    {
        if((a[i]<a[i+1])&&(a[i+1]<a[i+2]))
            printf("%d,%d,%d\n",a[i],a[i+1],a[i+2]);
    }
}
