#include<stdio.h>
int main()
{
     int n;
    printf("Enter Your N Number=");
    scanf("%d",&n);
     printf("First %d Natural Number in Reverse order",n);
    for(int i=n;i>0;i--)
    {
        printf("\n%d",i);
    }
    return 0;
}