#include<stdio.h>
int main()
{
     int n;
    printf("Enter Your N Number=");
    scanf("%d",&n);
    printf("Cubes Of First %d Natural Number",n);
    for(int i=1;i<=n;i++)
    {
        printf("\n%d",i*i*i);
    }
    return 0;
}