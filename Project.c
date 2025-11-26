#include <stdio.h>
#include <string.h>

int main() {
    int ids[100];           
    char names[100][50];    
    float fees[100];        
    int count = 0, choice;

    while (1) {
        printf("\nFee Management System\n");
        printf("1. Add Student Fee Record\n");
        printf("2. Display All Records\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
        printf("Enter Student ID: ");
        scanf("%d", &ids[count]);
        printf("Enter Student Name: ");
        scanf(" %[^\n]", names[count]);

        printf("Enter Fee Amount: ");
        scanf("%f", &fees[count]);     

        count++;
        printf("Student record added successfully.\n");
    }

         else if (choice == 2) {
            printf("\nID\tName\t\tFee\n");
            printf("---------------------------------\n");
            for (int i = 0; i < count; i++) {
                printf("%d\t%s\t\t%.2f\n", ids[i], names[i], fees[i]);
            }
        } else if (choice == 3) {
            printf("Exiting System.\n");
            break;
        } else {
            printf("Invalid choice, try again.\n");
        }
    }
    return 0;
}
