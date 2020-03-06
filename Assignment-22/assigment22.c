#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define PLAYERS_NUMBER 5

struct stats {
  int points;
  int games;
};

struct stats players[PLAYERS_NUMBER];

void read_number(int* number, int length);

int main(){

    for(int i = 0; i < PLAYERS_NUMBER; i++){
        printf("Enter Player %d's point total:", i+1);
        read_number(&(players[i].points), 5);
        printf("Enter Player %d's game total:", i+1);
        read_number(&(players[i].games), 5);
    }

    for(int i = 0; i < PLAYERS_NUMBER; i++){
        printf("\nPlayer %d's scoring average was %.2f ppg.", i+1, (float)(players[i].points)/(players[i].games));
    }

    return 1;
}


void read_number(int* number, int length){
    char input[length];
    int c;
    *number = strtoul(fgets(input, length, stdin), NULL, 10);
    if (strchr(input, '\n') == NULL)
        while((c = getc(stdin)) != '\n' && c != EOF);
}
