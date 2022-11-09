#include<stdio.h>
int main()
{
     int n;
    printf("Enter Your N Number=");
    scanf("%d",&n);
     printf("First %d Even Number in Reverse Order",n);
    for(int i=n*2;i>1;i=i-2)
    {
        printf("\n%d",i);
    }
    return 0;
}