#include <stdio.h>

int main() {
    int choice;
    char book[30] = "C Programming";

    printf("** Mini Library System **\n");
    printf("1. View Book\n");
    printf("2. Issue Book\n");
    printf("3. Return Book\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Book Name: %s\n", book);
            break;

        case 2:
            printf("Book Issued Successfully\n");
            break;

        case 3:
            printf("Book Returned Successfully\n");
            break;

        default:
            printf("Invalid Choice\n");
    }

    return 0;
}
