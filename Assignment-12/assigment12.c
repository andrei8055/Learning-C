#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define HEADS 0
#define TAILS 1


int main()
{
    srand(time(0));

    char flips_str[10];
    int flips = 0, heads = 0, tails = 0;

    printf("How many times would you like to flip the coin? ");
    flips = strtoul(fgets(flips_str, 5, stdin), NULL, 10);

    for(int i = 0; i < flips; i++) {
        if(rand() % 2 == HEADS)
            heads++;
        else
            tails++;
    }

    printf("%d heads\n", heads);
    printf("%d tails\n", tails);

    return 1;
}
