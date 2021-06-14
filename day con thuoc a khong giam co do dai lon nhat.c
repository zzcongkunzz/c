#include<stdio.h>
void main()
{
    int N,i,j,khong_giam,l,a[100],dau,cuoi,dem=1;
    printf("N= ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<=N-1;i++)
        for(j=i+1;j<=N;j++)
    {
        khong_giam=1;
        for(l=i;l<j;l++)
            if(a[l]>a[l+1])
            khong_giam=0;
        if(khong_giam==1)
            if((j-i+1)>dem)
            {
                dem=j-i+1;
                dau=i;
                cuoi=j;
            }
    }
    for(i=dau;i<=cuoi;i++)
        printf("%d, ",a[i]);
}
