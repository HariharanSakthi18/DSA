// 7. Read a three-digit number and find the sum of its digits.

#include<stdio.h>
int main() {
    int num, rem, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(num!=0){
        rem = num%10;
        sum = sum+rem;
        num = num/10;
    } 
    printf("Sum of digits: %d", sum);
    return 0;
}