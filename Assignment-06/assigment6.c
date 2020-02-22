#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main() {
    char n[10];
    char d[10];

    unsigned int numerator;
    unsigned int denominator;

    printf("Enter a numerator:");
    if(fgets(n, 10, stdin))
        n[strcspn(n, "\n")] = 0;

    printf("Enter a denominator:");
    if(fgets(d, 10, stdin))
        d[strcspn(d, "\n")] = 0;

    numerator = strtoul(n, NULL, 10);
    denominator = strtoul(d, NULL, 10);

    if(numerator % denominator == 0)
        printf("There is NOT a remainder!\n");
    else
        printf("There is a remainder!\n");

    return 1;
}
