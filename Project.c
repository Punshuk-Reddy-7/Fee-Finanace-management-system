#include <stdio.h>
#include <string.h>

int main() {
    int ids[100];
    char names[100][50];
    float fees[100];
    int rollNumbers[100];
    char classes[100][10];
    char paidStatus[100][10];
    int count = 0, choice;

    while (1) {
        printf("\nFee Management System\n");
        printf("1. Add Student Fee Record\n");
        printf("2. Display All Records\n");
        printf("3. Delete Student Record\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Student ID: ");
            scanf("%d", &ids[count]);
            printf("Enter Roll Number: ");
            scanf("%d", &rollNumbers[count]);
            printf("Enter Student Name: ");
            scanf(" %[^\n]", names[count]);
            printf("Enter Class/Section: ");
            scanf("%s", classes[count]);
            printf("Enter Fee Amount: ");
            scanf("%f", &fees[count]);
            printf("Has the student paid the fee? (Yes/No): ");
            scanf("%s", paidStatus[count]);
            count++;
            printf("Student record added successfully.\n");
        } else if (choice == 2) {
            printf("\nID\tRoll\tName\t\tClass\tFee\tPaid\n");
            printf("-------------------------------------------------------------\n");
            for (int i = 0; i < count; i++) {
                printf("%d\t%d\t%s\t%s\t%.2f\t%s\n", ids[i], rollNumbers[i], names[i], classes[i], fees[i], paidStatus[i]);
            }
        } else if (choice == 3) {
            int delRoll, found = 0, i, j;
            printf("Enter roll number of student to delete: ");
            scanf("%d", &delRoll);
            for (i = 0; i < count; i++) {
                if (rollNumbers[i] == delRoll) {
                    // manually move every element left
                    for (j = i; j < count - 1; j++) {
                        ids[j] = ids[j + 1];
                        rollNumbers[j] = rollNumbers[j + 1];
                        // names: manual character copy (no strcpy)
                        int k = 0;
                        while (names[j + 1][k] != '\0') {
                            names[j][k] = names[j + 1][k];
                            k++;
                        }
                        names[j][k] = '\0';
                        // classes: manual character copy
                        k = 0;
                        while (classes[j + 1][k] != '\0') {
                            classes[j][k] = classes[j + 1][k];
                            k++;
                        }
                        classes[j][k] = '\0';
                        fees[j] = fees[j + 1];
                        // paidStatus: manual character copy
                        k = 0;
                        while (paidStatus[j + 1][k] != '\0') {
                            paidStatus[j][k] = paidStatus[j + 1][k];
                            k++;
                        }
                        paidStatus[j][k] = '\0';
                    }
                    count--;
                    found = 1;
                    printf("Student record deleted successfully.\n");
                    break;
                }
            }
            if (!found) {
                printf("Roll number not found!\n");
            }
        } else if (choice == 4) {
            printf("Exiting System.\n");
            break;
        } else {
            printf("Invalid choice, try again.\n");
        }
    }
    return 0;
}

