#include<stdio.h>
void main()
{
    int N,i,j,k,a[100];
    printf("N= ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
     for(i=1;i<=N;i++)
        for(j=1;j<=N;j++)
            for(k=j+1;k<=N;k++)
                if((a[i]>a[j])&&(a[i]>a[k])&&((a[j]*a[j]+a[k]*a[k]==a[i]*a[i])))
     printf("%d,%d,%d\n",a[j],a[k],a[i]);
}
