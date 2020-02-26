#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    while(1 == 1){
        char number_str[10];

        printf("Enter a number between 1 and 500:");
        int number = strtol(fgets(number_str, 10, stdin), NULL, 10);

        if(0 < number && number <101)
            printf("Your number is between 1 and 100!\n");
        else if(100 < number && number <201)
            printf("Your number is between 101 and 200!\n");
        else if(200 < number && number <301)
            printf("Your number is between 201 and 300!\n");
        else if(300 < number && number <401)
            printf("Your number is between 301 and 400!\n");
        else if(400 < number && number <501)
            printf("Your number is between 401 and 500!\n");
        else
            printf("Your number was not in any of our ranges.\n");
    }
    return 1;
}
