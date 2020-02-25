#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<complex.h>

//(-b +- sqrt(b^2 -4ac) / (2*a)

int main() {
    char a_str[10];
    char b_str[10];
    char c_str[10];

    printf("Enter the value of variable 'A': ");
    int a = strtol(fgets(a_str, 10, stdin), NULL, 10);

    printf("Enter the value of variable 'B': ");
    int b = strtol(fgets(b_str, 10, stdin), NULL, 10);

    printf("Enter the value of variable 'C': ");
    int c = strtol(fgets(c_str, 10, stdin), NULL, 10);

    double complex positive_solution;
    double complex negative_solution;

    positive_solution = ((-1*b) + csqrt(pow(b,2) - (4 *a*c))) / (2*a);
    negative_solution = ((-1*b) - csqrt(pow(b,2) - (4 *a*c))) / (2*a);

    //double positive_real = creal(positive_solution);
    //double negative_real = creal(negative_solution);
    //double positive_imag = cimag(positive_solution);
    //double negative_imag = cimag(positive_solution);

    printf("The solution using the '+' operator is: %.5f (imaginary part is %+.5fi)\n", creal(positive_solution), cimag(positive_solution));
    printf("The solution using the '-' operator is: %.5f (imaginary part is %+.5fi)\n", creal(negative_solution), cimag(negative_solution));

    return 1;
}
