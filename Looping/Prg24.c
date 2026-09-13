// 24. Print the multiplication table of a number.

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Multiplication table of %d:\n", num);
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, num, num * i);
    }
    return 0;
}