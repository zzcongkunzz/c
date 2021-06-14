#include<stdio.h>
#include<math.h>
void main()
{
    int N;
    printf("N=");
    scanf("%d",&N);
    if (pow((int) sqrt(N),2)==N)
        printf("N la so chinh phuong");
    else
        printf("N k la so chinh phuong");
}
