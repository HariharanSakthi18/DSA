// 19. Find the factorial of a number.

#include <stdio.h>
int main() {
    int num, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num != 0) {
        factorial *= num;
        num--;
    }
    printf("The factorial is: %d\n", factorial);
    
    return 0;
}