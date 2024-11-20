#include <stdio.h>
#include <string.h>
#define MAX_PACKAGES 100
struct TravPac {
    char name[50], destination[50];
    int duration, seatsAvailable;
    float cost;
};

void displayPackages(struct TravPac packages[],int count){
    for (int i = 0; i < count; i++) {
        printf("\nPackage %d: %s\nDestination: %s\nDuration: %d days\nCost: $%.2f\nSeats Available: %d\n", 
                i + 1, packages[i].name, packages[i].destination, packages[i].duration, packages[i].cost, packages[i].seatsAvailable);
    }
}

void bookPackage(struct TravPac packages[],int count){
    displayPackages(packages, count);
    int choice;
    printf("\nEnter package number to book: ");
    scanf("%d", &choice);
    
    if (choice >= 1 && choice <= count && packages[choice - 1].seatsAvailable > 0){
        packages[choice - 1].seatsAvailable--;
        printf("Booking successful for package: %s\n", packages[choice - 1].name);
    } else {
        printf("Invalid choice or no seats available.\n");
    }
}

int main(){
    struct TravPac packages[MAX_PACKAGES] ={
        {"Beach Escape", "Maldives", 5, 10, 1200.50},
        {"Mountain Adventure", "Nepal", 7, 5, 800.75},
        {"City Tour", "Paris", 4, 8, 950.00}
    };
    int choice;
    
    do {
        printf("\n1. Display Packages\n2. Book Package\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if (choice == 1) displayPackages(packages, 3);
        else if (choice == 2) bookPackage(packages, 3);
        else if (choice != 3) printf("Invalid choice.\n");
    } while (choice != 3);

    return 0;
}


