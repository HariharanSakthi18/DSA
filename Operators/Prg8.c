// 8. Read a number and extract its last digit.
#include<stdio.h>
int main(){
    int num, last;
    printf("Enter a number: ");
    scanf("%d",&num);
    last = num%10;
    printf("Last Number: %d", last);
    return 0;
}