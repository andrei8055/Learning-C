#include<stdio.h>

struct{
    int i;
    char c;
    float f;
}s;

int main() {
    s.i = 1;
    s.c = 'a';
    s.f = 3.14;

    printf("This is the int: %d, this is the char: %c, this is the float: %.2f", s.i, s.c, s.f);

    return 1;
}
