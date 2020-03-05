#include<stdio.h>
#include<stdlib.h>

int main(){
    char *ptr = malloc(5 * sizeof(char));
    if(ptr == NULL)
        return 1;
    else
        printf("Memory was successfully allocated.\n");

    free(ptr);
    return 0;
}
