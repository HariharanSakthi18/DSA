// 2. Read the radius of a circle and find its area and circumference.

#include<stdio.h>
int main() {
    int radius,area,circumference;
    printf("Enter the radius of the circle: ");
    scanf("%d",&radius);
    int PI = 3.14;

    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("Area of the circle: %d\n", area);
    printf("Circumference of the circle: %d\n", circumference);
    return 0;
}