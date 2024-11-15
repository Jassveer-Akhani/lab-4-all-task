#include <stdio.h>
#include <string.h>
typedef struct {
    char title[100];
    char author[100];
    char ISBN[20];
    int publicationYear;
    int isAvailable; 
} Book;
#define MAX_BOOKS 100
Book library[MAX_BOOKS];
int bookCount = 0;
void addBook(const char* title, const char* author, const char* ISBN, int year) {
    if (bookCount >= MAX_BOOKS) {
        printf("Library is full. Cannot add more books.\n");
        return;
    }
    strcpy(library[bookCount].title, title);
    strcpy(library[bookCount].author, author);
    strcpy(library[bookCount].ISBN, ISBN);
    library[bookCount].publicationYear = year;
    library[bookCount].isAvailable = 1; 
    bookCount++;
    printf("Book '%s' by %s added successfully.\n", title, author);
}
void searchBook(const char* query) {
    int found = 0;
    for (int i = 0; i < bookCount; i++) {
        if (strstr(library[i].title, query) || strstr(library[i].author, query)) {
            printf("Book Found:\n");
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            printf("ISBN: %s\n", library[i].ISBN);
            printf("Publication Year: %d\n", library[i].publicationYear);
            printf("Availability: %s\n", library[i].isAvailable ? "Available" : "Checked Out");
            found = 1;
        }
    }
    if (!found) {
        printf("No book found matching the query '%s'.\n", query);
    }
}
void updateAvailability(const char* ISBN, int status) {
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(library[i].ISBN, ISBN) == 0) {
            library[i].isAvailable = status;
            printf("Book '%s' availability updated to '%s'.\n",
                   library[i].title,
                   status ? "Available" : "Checked Out");
            return;
        }
    }
    printf("No book found with ISBN '%s'.\n", ISBN);
}
int main() {
    int choice;
    char title[100], author[100], ISBN[20];
    int year, status;

    do {
        printf("\nLibrary Management System\n");
        printf("1. Add a new book\n");
        printf("2. Search for a book\n");
        printf("3. Update book availability\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1:
                printf("Enter title: ");
                fgets(title, sizeof(title), stdin);
                title[strcspn(title, "\n")] = '\0'; 
                printf("Enter author: ");
                fgets(author, sizeof(author), stdin);
                author[strcspn(author, "\n")] = '\0'; 
                printf("Enter ISBN: ");
                fgets(ISBN, sizeof(ISBN), stdin);
                ISBN[strcspn(ISBN, "\n")] = '\0'; 
                printf("Enter publication year: ");
                scanf("%d", &year);
                addBook(title, author, ISBN, year);
                break;
            case 2:
                printf("Enter title or author to search: ");
                fgets(title, sizeof(title), stdin);
                title[strcspn(title, "\n")] = '\0'; 
                searchBook(title);
                break;
            case 3:
                printf("Enter ISBN of the book: ");
                fgets(ISBN, sizeof(ISBN), stdin);
                ISBN[strcspn(ISBN, "\n")] = '\0'; 
                printf("Enter status (1 for Available, 0 for Checked Out): ");
                scanf("%d", &status);
                updateAvailability(ISBN, status);
                break;
            case 4:
                printf("Exiting the system.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 4);

    return 0;
}
