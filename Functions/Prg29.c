// 29. Write a function to check whether a number is prime.

#include <stdio.h>
int isPrime(int num, int prime) {
    for(int i = 2; i<= num/2; i++){
        if(num % i == 0) {
            prime = 0;
            break;
        }
    }
    return prime;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int prime = 1;
    if(isPrime(num, prime) == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}   
