#include <stdio.h>
#include <string.h>
void reverseString(char *str, int ind){
    if(ind< 0) {
        return;
    }
     printf("%c",str[ind]);
     reverseString(str, ind -1);
}
int main(){
    char sent[100];
    printf("Enter a sentence: ");
    
    gets(sent);

    int length = strlen(sent);
    reverseString(sent,length - 1);
    printf("\n");
    return 0;
}


