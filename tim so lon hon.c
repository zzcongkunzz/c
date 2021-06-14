#include<stdio.h>
void main()
{
    int a,b,c;
    printf("nhap 2 so a,b,c");
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b)
    {
        if (a>=c)
            printf("so lon nhat la:%d",a);
        else
            printf("so lon nhat la:%d",c);
    }
    else
    {
        if (b>=c)
            printf("so lon nhat la:%d",b);
        else
            printf("so lon nhat la:%d",c);
    }

}
