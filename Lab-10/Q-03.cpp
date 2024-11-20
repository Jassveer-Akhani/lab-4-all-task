#include <stdio.h>
#include <string.h>
#define MAX_CARS 100
struct Car{
    char make[50];
    char model[50];
    int year;
    float price;
    int mileage;
};
void addCar(struct Car cars[],int *count){
    if(*count >= MAX_CARS){
        printf("Car inventory is full!\n");
        return;
    }
    printf("Enter make: ");
    scanf("%s", cars[*count].make);
    printf("Enter model: ");
    scanf("%s", cars[*count].model);
    printf("Enter year: ");
    scanf("%d", &cars[*count].year);
    printf("Enter price: ");
    scanf("%f", &cars[*count].price);
    printf("Enter mileage: ");
    scanf("%d", &cars[*count].mileage);
    (*count)++;
    printf("Car added successfully!\n");
}

void displayCars(struct Car cars[], int count) {
    if (count == 0) {
        printf("No cars available.\n");
        return;
    }

    printf("\nAvailable Cars:\n");
    printf("--------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("Car %d:\n", i + 1);
        printf("Make: %s\n", cars[i].make);
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("Price: $%.2f\n", cars[i].price);
        printf("Mileage: %d miles\n", cars[i].mileage);
        printf("--------------------------------------\n");
    }
}

void searchCars(struct Car cars[], int count) {
    if (count == 0) {
        printf("No cars available to search.\n");
        return;
    }

    char searchTerm[50];
    printf("Enter make or model to search: ");
    scanf("%s", searchTerm);

    printf("\nSearch Results:\n");
    printf("--------------------------------------\n");
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(cars[i].make, searchTerm) == 0 || strcmp(cars[i].model, searchTerm) == 0) {
            printf("Car %d:\n", i + 1);
            printf("Make: %s\n", cars[i].make);
            printf("Model: %s\n", cars[i].model);
            printf("Year: %d\n", cars[i].year);
            printf("Price: $%.2f\n", cars[i].price);
            printf("Mileage: %d miles\n", cars[i].mileage);
            printf("--------------------------------------\n");
            found = 1;
        }
    }

    if (!found) {
        printf("No cars found with make or model: %s\n", searchTerm);
    }
}

int main() {
    struct Car cars[MAX_CARS];
    int count = 0;
    int choice;

    do {
        printf("\nCar Dealership Management System\n");
        printf("1. Add New Car\n");
        printf("2. Display Available Cars\n");
        printf("3. Search Cars by Make or Model\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addCar(cars, &count);
                break;
            case 2:
                displayCars(cars, count);
                break;
            case 3:
                searchCars(cars, count);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

