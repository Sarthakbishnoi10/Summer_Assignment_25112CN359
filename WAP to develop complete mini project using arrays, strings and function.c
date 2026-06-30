#include <stdio.h>

char name[3][20];
int marks[3], i;

void input() {
    for(i = 0; i < 3; i++) {
        printf("\nEnter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }
}

void display() {
    printf("\n*** Student Records ***\n");

    for(i = 0; i < 3; i++) {
        printf("Name: %s\tMarks: %d\n", name[i], marks[i]);
    }
}

int main() {
    input();
    display();

    return 0;
}