#include <stdio.h>
#include <string.h>

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    char names[n][100]; // Assuming each name can have at most 99 characters

    // Input names
    for (int i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", names[i]);
    }

    printf("Names that start with 'a':\n");

    // Check and print names starting with 'a'
    for (int i = 0; i < n; i++) {
        if (names[i][0] == 'a' || names[i][0] == 'A') {
            printf("%s\n", names[i]);
        }
    }

    return 0;
}

