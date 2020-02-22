#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    char sec_str[100];
    int s;

    printf("Enter the number of seconds:");
    if (fgets(sec_str, 100, stdin))
        sec_str[strcspn(sec_str, "\n")] = 0;

    s = strtoul(sec_str, NULL, 10);

    unsigned int seconds =  s;

    unsigned int hours = seconds / 3600;
    seconds = seconds - (hours* 3600);

    unsigned int minutes = seconds / 60;
    seconds = seconds - (minutes * 60);

    printf("%d seconds is equal to %d hours, %d minutes, and %d seconds.", s, hours, minutes, seconds);

    return 1;
}
