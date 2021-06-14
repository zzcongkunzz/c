#include<stdio.h>
void main()
{
    int a=12,b=13,c;
    int *ptr=&a,*ptr2=&b,*iii=NULL;
    c=*ptr+*ptr2;

    printf("%d",c);
}
