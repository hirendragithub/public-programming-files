#include <stdio.h>

struct Student {
    int id;
    char name[50]; // Use an array to store the name
    float salary;
}s[20];

int main() {
    int a;

    for (a = 0; a < 20; a++) {
        printf("Enter the ID of employee %d: ", a + 1);
        scanf("%d", &s[a].id);

        printf("Enter the name of employee %d: ", a + 1);
        scanf("%s", s[a].name);

        printf("Enter the salary of employee %d: ", a + 1);
        scanf("%f", &s[a].salary);
    }

    printf("Student information:\n");
    for (a = 0; a < 20; a++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", s[a].id, s[a].name, s[a].salary);
    }

    return 0;
}

