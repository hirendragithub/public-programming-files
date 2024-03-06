#include <stdio.h>

int main() {
    int array[100], a, b, holder,d = 0;
    printf("Please input how many integers you want to enter: ");
    scanf("%d", &a);

    for (b = 0; b < a; b++) {
        printf("Enter the number: ");
        scanf("%d", &array[b]);
    }

    // To find the greatest number
    for (b = 1; b < a; b++) {
        if (array[b] > array[d]) {
            d = b; // Update d when a greater number is found
        }
    }

    printf("The greatest number is %d\n", array[d]);
    

    // To find the smallest number
    for (b = 1; b < a; b++) {
        if (array[b] < array[d]) {
            d = b; // Update d when a smaller number is found
        }
    }

    printf("The smallest number is %d\n", array[d]);

    


    return 0;
}

