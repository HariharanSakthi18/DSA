// 37. Count the frequency of a given element in an array.

#include <stdio.h>
int main() {
    int arr[100], n, search, count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to count its frequency: ");
    scanf("%d", &search);
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            count++;
        }
    }
    printf("The frequency of element %d in the array is: %d\n", search, count);
    return 0;
}