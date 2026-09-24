#include <stdio.h>

int main(void)
{
    int choice;

    do {
        printf("\n===== JOLLIBEE MENU =====\n");
        printf("1. Chickenjoy       - P99\n");
        printf("2. Jolly Spaghetti  - P75\n");
        printf("3. Yumburger        - P50\n");
        printf("4. Peach Mango Pie  - P45\n");
        printf("5. Jolly Fries      - P55\n");
        printf("0. Exit\n");
        printf("Choose an item: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        switch (choice) {
            case 1:
                printf("You selected Chickenjoy - P99\n");
                break;
            case 2:
                printf("You selected Jolly Spaghetti - P75\n");
                break;
            case 3:
                printf("You selected Yumburger - P50\n");
                break;
            case 4:
                printf("You selected Peach Mango Pie - P45\n");
                break;
            case 5:
                printf("You selected Jolly Fries - P55\n");
                break;
            case 0:
                printf("Thank you for visiting Jollibee!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}