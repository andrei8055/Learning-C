#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_GRADES 8

int main() {

    char grade_str[5];
    char answer[2];
    int grades[10];
    int sum = 0, i = 0;

    while(i <= MAX_GRADES) {
        printf("Enter grade:");
        grades[i] = strtoul(fgets(grade_str, 5, stdin), NULL, 10);
        i++;

        printf("Would you like to continue? Y/N");
        if(fgets(answer, 2, stdin)){
            if(strcmp(answer, "Y") == 0)
                printf("YES");
            else {
                printf("No");
                break;
            }
        }

        //clear newline character from buffer before fgets() again
        getchar();
    }

    for(int j = 0; j < i; j++)
        sum += grades[j];

    printf("Average = %f", (float)(sum/i));

    return 1;
}
