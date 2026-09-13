// 20. Reverse a number.

#include <stdio.h>
int main() {
    int num, diff, reversed = 0;
    printf("Enter a number: ");
    scanf("%d",&num);

    while(num!=0){
        diff = num % 10;
        reversed = reversed * 10 + diff;
        num /= 10;
    }
    printf("The reversed number is: %d\n", reversed);
    return 0;
}