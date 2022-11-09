#include<stdio.h>
int main()
{
     int n;
    printf("Enter Your N Number=");
    scanf("%d",&n);
    printf("Table OF %d",n);
    for(int i=1;i<11;i++)
    {
        printf("\n%d*%d=%d",n,i,i*n);
    }
    return 0;
}