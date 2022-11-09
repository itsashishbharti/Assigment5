 #include<stdio.h>
 int main()
 {
  int n;
    printf("Enter Your N Number=");
    scanf("%d",&n);
    printf("First %d Odd Number in Reverse Oeder",n);
    for(int i=n*2-1;i>0;i=i-2)
    {
        printf("\n%d",i);
    }
    return 0;
 }