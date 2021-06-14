#include<stdio.h>
void main()
{
    int N,i,j,x,a[100];
    printf("N,x= ");
    scanf("%d %d",&N,&x);
    for(i=1;i<=N;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<=N;i++)
        for(j=i+1;j<=N;j++)
            if(x==a[i]+a[j])
            printf("%d %d\n",a[i],a[j]);
}
