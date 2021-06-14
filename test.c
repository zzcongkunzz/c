#include<stdio.h>
void main()
{
    int N,i,j,a[100],snn;
    printf("N= ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<=N;i++)
        for(j=i+1;j<N;j++)
        {
            if(a[i]<a[j])
                snn=a[i];
            else
                snn=a[j];
        }
    printf("%d",snn);
}
