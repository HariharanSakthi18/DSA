// 27. Write a function to find the largest of three numbers.

#include <stdio.h>
int largest(int, int, int);
int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("The largest number is: %d\n", largest(num1, num2, num3));
    return 0;
}

int largest(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}