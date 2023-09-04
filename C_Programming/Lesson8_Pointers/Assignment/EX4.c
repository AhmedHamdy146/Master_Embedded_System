// Write a program in C to print the elements of an array in reverse
// order.

#include <stdio.h>

int main() {
    int n = 0;
    int a[16] = {};
    printf("Input the number of elements to store in the array (max 15) : ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &n);
    printf("input %d number of elements in the array: ", n);
    int i = 0;
    for(i = 0; i < n ; i++)  {
        scanf("%d" , &a[i]);    
        printf("element - %d : %d\n", i + 1 , a[i]);
    }
    printf("\nThe elements of array in reverse order are :\n");
    int *ptr = &a[n - 1];
    i = 0;
    while(n > 0) {
        printf("element - %d : %d\n", i + 1 , *ptr);
        ptr-- , n-- , i++;
    }
    return 0;
}