#include <stdio.h>

int main() {
    char name[3][20];
    int marks[3];
    int i;

    printf("Enter details of 3 students:\n");

    for(i = 0; i < 3; i++) {
        printf("\nEnter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }

    printf("\n*** Student Records ***\n");

    for(i = 0; i < 3; i++) {
        printf("Name: %s\tMarks: %d\n", name[i], marks[i]);
    }

    return 0;
}