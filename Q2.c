#include<stdio.h>
int main()
{ int n;
    printf("Enter Your N Number=");
    scanf("%d",&n);
    printf("First %d Natural Number",n);
    for(int i=1;i<=n;i++)
    {
        printf("\n%d",i);
    }
    return 0;
}