#include<stdio.h>
#include<stdlib.h>

int main() {
    int a = 10000000;
    int *even, *odd;
    even = (int*)malloc((a/2) * sizeof(int));  // Allocate memory for even numbers
    odd = (int*)malloc((a/2) * sizeof(int));   // Allocate memory for odd numbers

    if (even == NULL || odd == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    int evenIndex = 0, oddIndex = 0;

    for (int b = 1; b <= a; b++) {
        if (b % 2 == 0) {
            even[evenIndex] = b;
            evenIndex++;
        } else {
            odd[oddIndex] = b;
            oddIndex++;
        }
    }

    printf("Even numbers are:\n");
    for (int i = 0; i < evenIndex; i++) {
        printf("%d\t", even[i]);
    }

    printf("\nOdd numbers are:\n");
    for (int i = 0; i < oddIndex; i++) {
        printf("%d\t", odd[i]);
    }

    free(even);
    free(odd);

    return 0;
}

