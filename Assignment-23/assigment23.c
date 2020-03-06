#include<stdio.h>

struct example{
    int integer;
};

int main(){
    struct example *ptr;
    struct example test;

    ptr = &test;

    test.integer = 1;
    printf("test.integer = %d\n", test.integer);

    (*ptr).integer = 2;
    printf("(*ptr).integer = %d\n", test.integer);

    ptr->integer = 3;
    printf("ptr->integer = %d\n", test.integer);

    return 1;
}
