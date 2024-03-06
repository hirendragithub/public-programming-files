// to take nth number of integers and print number that lies between 50 to 80
#include <stdio.h>

int main() {
    int n, num, count = 0,a=165;
    int arr[100];  // assuming n <= 100

    printf("Enter the number of integers: ");
    scanf("%d", &n);

   // Loop to read in n integers and store them in an array
    for (int i = 0; i < n; i++) {
    printf("\nEnter %d integers:", a++);
        scanf("%d", &num);

        if (num >= 50 && num <= 80) {
            arr[count] = num;
            count++;
        }
    }

    // Loop to print out all the numbers between 50 and 80
    printf("Numbers between 50 and 80: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


