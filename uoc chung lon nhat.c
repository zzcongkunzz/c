#include<stdio.h>
void main()
{
    int i,a,b,ucln;
    printf("nhap 2 so a,b: ");
    scanf("%d %d",&a,&b);
    if(a>=b)
    {
        printf("uoc chung cua a,b la:\n");
        for(i=1;i<=b;i++)
            if((a%i==0)&&(b%i==0))
            {
                printf("%d ",i);
                ucln=i;
            }
    }
    else
    {
        printf("uoc chung cua a,b la\n");
        for(i=1;i<=a;i++)
            if((a%i==0)&&(b%i==0))
            {
                printf("%d ",i);
                ucln=i;
            }
    }
    printf("\nuoc chung lon nhat la:%d",ucln);
}
