#include<stdio.h>

int main() {
    int array[] = {1,2,3,4,5,6,7,8};

    int array_size = sizeof(array);
    int elem_size = sizeof(int);

    printf("The array has %d elements.\n", array_size/elem_size);

    return 1;
}
