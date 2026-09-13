// 3. Read marks of 5 subjects and calculate total and average.

#include<stdio.h>
int main() {
    float sub1, sub2, sub3, sub4, sub5, total, average;
    printf("Enter marks of 5 subjects: ");
    scanf("%f%f%f%f%f", &sub1, &sub2, &sub3, &sub4, &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;

    average = total / 5;
    printf("Total marks: %.2f\n", total);
    printf("Average marks: %.2f\n", average);
    return 0;
}