// 6. Read an integer and find whether it is even or odd using the modulus operator.

#include<stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num%2==0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    return 0;
}