#include<stdio.h>
#include<stdlib.h>

#define PLAYERS 3
#define GAMES 3

int main() {
    int points[GAMES][PLAYERS];
    int scores[PLAYERS] = {};
    int highest_score = 0;
    int highest_player = 0;

    char score_str[4];

    for(int g = 0; g < GAMES; g++){
        printf("Game #%d\n", g + 1);

        for(int p = 0; p < PLAYERS; p++){
            printf("Enter scoring total for Player #%d: ", p + 1);
            points[g][p] = strtoul(fgets(score_str, 4, stdin), NULL, 10);
        }
    }

    for(int g = 0; g < GAMES; g++){
        for(int p = 0; p < PLAYERS; p++){
                scores[p] += points[g][p];
                if(scores[p] > highest_score) {
                    highest_score = scores[p];
                    highest_player = p;
                    //printf("Game %d Player %d Points %d HS %d HP %d\n", g+1, p+1, points[g][p], highest_score, highest_player);
                }
            }
    }

    printf("Highest score = %d\n", highest_score);
    printf("Player #%d had the highest scoring average at %f points per game.\n", highest_player + 1, (float)(highest_score / GAMES));

    return 1;
}
