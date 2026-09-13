// 1. Read two integers and print their sum, difference, product and quotient.

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two Values: ");
    scanf("%d%d",&a,&b);
    printf("sum: %d",a+b);
    printf("\ndifference: %d",a-b);
    printf("\nproduct: %d",a*b);
    printf("\nquotient: %d",a/b);
    return 0;
}