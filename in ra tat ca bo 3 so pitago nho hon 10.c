#include<stdio.h>
void main()
{
    int i,j,k,N=1000;
    for(i=1;i<N;i++)
         for(j=1;j<N;j++)
            for(k=j+1;k<N;k++)
                if(j*j+k*k==i*i)
    printf("%d,%d,%d\n",j,k,i);
}
