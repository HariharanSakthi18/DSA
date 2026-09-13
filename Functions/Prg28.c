// 28. Write a function to calculate factorial.

#include <stdio.h>

long long factorial(int num);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial of a negative number doesn't exist.\n");
    }
    else
    {
        printf("Factorial of %d = %lld\n", num, factorial(num));
    }

    return 0;
}

long long factorial(int num)
{
    long long fact = 1;

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    return fact;
}