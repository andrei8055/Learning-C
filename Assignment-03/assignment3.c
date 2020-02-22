#include<stdio.h>
#include<string.h>

#define NAME_LENGTH 40

int main(){
    char firstname[NAME_LENGTH];
    char lastname[NAME_LENGTH];

    printf("Enter your first name:");
    if (fgets(firstname, NAME_LENGTH, stdin))
        firstname[strcspn(firstname, "\n")] = 0;

    printf("Enter your last lastname:");
    if (fgets(lastname, NAME_LENGTH, stdin))
        lastname[strcspn(lastname, "\n")] = 0;

    printf("Hello %s %s!", firstname, lastname);
    return 1;
}
