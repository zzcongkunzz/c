#include<stdio.h>
int main()
{
    float daylon, daynho, chieucao;
    printf("nhap daylon,daynho,chieucao");
    scanf("%f %f %f",&daylon,&daynho,&chieucao);
    printf("dien tich hinh thang:%.3f",((daylon+daynho)*chieucao)/2);
    return 0;
}
