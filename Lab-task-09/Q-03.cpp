#include <stdio.h>
#include <string.h>
int main(){
    char username[]= "admin";
    char password[]= "1234";
    char username2[20];
    char password2[20];

    printf("Enter username: ");
    scanf("%s", username2);
    printf("Enter password: ");
    scanf("%s", password2);
    
     if(strcmp(username2, username) == 0 && strcmp(password2, password) == 0){
        printf("Access granted\n");
    } else{
        printf("Access denied\n");
    }

    return 0;
}


