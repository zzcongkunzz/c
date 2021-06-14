#include<stdio.h>
void main()
{
    int a,i,dem;
    for(a=2;a<=1000;a++)
    {
        dem=0;
        for(i=1;i<=a;i++)
            if(a%i==0)
                dem++;
        if(dem==2)
            printf("%d ",a);
    }
}
