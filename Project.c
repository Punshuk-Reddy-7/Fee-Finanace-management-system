#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float fee;
};

void addStudent(struct Student students[], int *count) {
    printf("Enter Student ID: ");
    scanf("%d", &students[*count].id);
    printf("Enter Student Name: ");
    scanf("%s", students[*count].name);
    printf("Enter Fee Amount: ");
    scanf("%f", &students[*count].fee);
    (*count)++;
    printf("Student record added successfully.\n");
}

void displayStudents(struct Student students[], int count) {
    printf("\nID\tName\t\tFee\n");
    printf("---------------------------------\n");
    for(int i = 0; i < count; i++) {
        printf("%d\t%s\t\t%.2f\n", students[i].id, students[i].name, students[i].fee);
    }
}

int main() {
    struct Student students[100];
    int count = 0;
    int choice;

    while(1) {
        printf("\nFee Management System\n");
        printf("1. Add Student Fee Record\n");
        printf("2. Display All Records\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                printf("Exiting System.\n");
                exit(0);
            default:
                printf("Invalid choice, try again.\n");
        }
    }
    return 0;
}
