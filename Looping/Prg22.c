// 22. Check whether a number is a palindrome.

#include <stdio.h>
int main() {
    int num, temp, rev = 0, diff;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp = num;
    while(num != 0) {
        diff = num % 10;
        rev = rev * 10 + diff;
        num /= 10;
    }
    if(temp == rev) {
        printf("%d is a palindrome number.\n", temp);
    } else {
        printf("%d is not a palindrome number.\n", temp);
    }
    return 0;
}