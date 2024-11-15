#include <stdio.h>
#include <string.h>
typedef struct {
    char flightNumber[10];
    char departureCity[50];
    char arrivalCity[50];
    char departureTime[10];
    char arrivalTime[10];
    int availableSeats;
} Flight;
#define MAX_FLIGHTS 100
Flight flights[MAX_FLIGHTS];
int flightCount = 0;
void addFlight(const char* flightNumber, const char* departureCity, const char* arrivalCity,
               const char* departureTime, const char* arrivalTime, int availableSeats) {
    if (flightCount >= MAX_FLIGHTS) {
        printf("Cannot add more flights. System is full.\n");
        return;
    }
    strcpy(flights[flightCount].flightNumber, flightNumber);
    strcpy(flights[flightCount].departureCity, departureCity);
    strcpy(flights[flightCount].arrivalCity, arrivalCity);
    strcpy(flights[flightCount].departureTime, departureTime);
    strcpy(flights[flightCount].arrivalTime, arrivalTime);
    flights[flightCount].availableSeats = availableSeats;
    flightCount++;
    printf("Flight %s added successfully.\n", flightNumber);
}
void bookSeat(const char* flightNumber) {
    for (int i = 0; i < flightCount; i++) {
        if (strcmp(flights[i].flightNumber, flightNumber) == 0) {
            if (flights[i].availableSeats > 0) {
                flights[i].availableSeats--;
                printf("Seat booked successfully on flight %s.\n", flightNumber);
            } else {
                printf("No seats available on flight %s.\n", flightNumber);
            }
            return;
        }
    }
    printf("Flight %s not found.\n", flightNumber);
}
void displayFlights(const char* departureCity, const char* arrivalCity) {
    int found = 0;
    printf("Available flights from %s to %s:\n", departureCity, arrivalCity);
    for (int i = 0; i < flightCount; i++) {
        if (strcmp(flights[i].departureCity, departureCity) == 0 &&
            strcmp(flights[i].arrivalCity, arrivalCity) == 0) {
            printf("Flight: %s | Departure: %s | Arrival: %s | Seats: %d\n",
                   flights[i].flightNumber, flights[i].departureTime,
                   flights[i].arrivalTime, flights[i].availableSeats);
            found = 1;
        }
    }
    if (!found){
        printf("No flights found between %s and %s.\n", departureCity, arrivalCity);
    }
}
void updateFlightDetails(const char* flightNumber, const char* newDepartureTime,
                         const char* newArrivalTime) {
    for (int i = 0; i < flightCount; i++) {
        if (strcmp(flights[i].flightNumber, flightNumber) == 0) {
            strcpy(flights[i].departureTime, newDepartureTime);
            strcpy(flights[i].arrivalTime, newArrivalTime);
            printf("Flight %s schedule updated successfully.\n", flightNumber);
            return;
        }
    }
    printf("Flight %s not found.\n", flightNumber);
}
int main(){
    int choice;
    char flightNumber[10], departureCity[50], arrivalCity[50];
    char departureTime[10], arrivalTime[10];
    int availableSeats;

    do{
       printf("\nFlight Booking System\n");
        printf("1. Add a flight\n");
        printf("2. Book a seat\n");
        printf("3. Display available flights\n");
        printf("4. Update flight details\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        switch (choice) {
            case 1:
                printf("Enter flight number: ");
                fgets(flightNumber, sizeof(flightNumber), stdin);
                flightNumber[strcspn(flightNumber, "\n")] = '\0';
                printf("Enter departure city: ");
                fgets(departureCity, sizeof(departureCity), stdin);
                departureCity[strcspn(departureCity, "\n")] = '\0'; 
                printf("Enter arrival city: ");
                fgets(arrivalCity, sizeof(arrivalCity), stdin);
                arrivalCity[strcspn(arrivalCity, "\n")] = '\0'; 
                printf("Enter departure time: ");
                fgets(departureTime, sizeof(departureTime), stdin);
                departureTime[strcspn(departureTime, "\n")] = '\0'; 
                printf("Enter arrival time: ");
                fgets(arrivalTime, sizeof(arrivalTime), stdin);
                arrivalTime[strcspn(arrivalTime, "\n")] = '\0'; 
                printf("Enter number of available seats: ");
                scanf("%d", &availableSeats);
                addFlight(flightNumber, departureCity, arrivalCity, departureTime, arrivalTime, availableSeats);
                break;

            case 2:
                printf("Enter flight number to book a seat: ");
                fgets(flightNumber, sizeof(flightNumber), stdin);
                flightNumber[strcspn(flightNumber, "\n")] = '\0'; 
                bookSeat(flightNumber);
                break;
            case 3:
                printf("Enter departure city: ");
                fgets(departureCity, sizeof(departureCity), stdin);
                departureCity[strcspn(departureCity, "\n")] = '\0';
                printf("Enter arrival city: ");
                fgets(arrivalCity, sizeof(arrivalCity), stdin);
                arrivalCity[strcspn(arrivalCity, "\n")] = '\0'; 
                displayFlights(departureCity, arrivalCity);
                break;
            case 4:
                printf("Enter flight number to update: ");
                fgets(flightNumber, sizeof(flightNumber), stdin);
                flightNumber[strcspn(flightNumber, "\n")] = '\0'; 
                printf("Enter new departure time: ");
                fgets(departureTime, sizeof(departureTime), stdin);
                departureTime[strcspn(departureTime, "\n")] = '\0'; 
                printf("Enter new arrival time: ");
                fgets(arrivalTime, sizeof(arrivalTime), stdin);
                arrivalTime[strcspn(arrivalTime, "\n")] = '\0';
                updateFlightDetails(flightNumber, departureTime, arrivalTime);
                break;
            case 5:
                printf("Exiting the system.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
