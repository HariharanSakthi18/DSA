// 38. Write a function for linear search.

#include <stdio.h>

int linear_search(int arr[], int n, int search) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            return 1; 
        }
    }
    return 0; 
}

int main() {
    int arr[100], n, search, found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &search);
    
   
    found = linear_search(arr, n, search);
    
    if (found) {
        printf("Element %d found in the array.\n", search);
    } else {
        printf("Element %d not found in the array.\n", search);
    }
    return 0;
}