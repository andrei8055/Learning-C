#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

#define MAX_RADIUS_LENGTH 20
#define PIE 3.14

int main() {
    char radius_str[MAX_RADIUS_LENGTH];

    printf("Enter the radius of your circle:");
    if (fgets(radius_str, MAX_RADIUS_LENGTH, stdin))
        radius_str[strcspn(radius_str, "\n")] = 0;

    float radius = strtof(radius_str, NULL);
    float result = pow(radius, 2) * PIE;

    printf("The area of your circle is %5f", result);

    return 1;
}
