#include<stdio.h>
int main()
{
     int n;
    printf("Enter Your N Number=");
    scanf("%d",&n);
     printf("First %d Even Number",n);
    for(int i=2;i<=n*2;i=i+2)
    {
        printf("\n%d",i);
    }
    return 0;
}