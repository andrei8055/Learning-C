#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct employee{
    char firstname[20];
    char lastname[20];
    char title[20];
    int id;
    int ssn;
};

void read_string(char* string, int length);

void read_number(int* number, int length);

void read_employee(struct employee *e);

void print_employee(struct employee *e);

int main(){
    struct employee *e1;
    struct employee *e2;

    struct employee* employees[2];

    e1 = malloc(sizeof(struct employee));
    e2 = malloc(sizeof(struct employee));

    employees[0] = e1;
    employees[1] = e2;

    read_employee(employees[0]);
    read_employee(employees[1]);

    print_employee(employees[0]);
    print_employee(employees[1]);

    return 1;
}

void read_string(char* string, int length){
    char input[length];
    int c;
    fgets(input, length, stdin);
    strncpy(string , input, length);
    if (strchr(input, '\n') == NULL)
        while((c = getc(stdin)) != '\n' && c != EOF);
}

void read_number(int* number, int length){
    char input[length];
    int c;
    *number = strtoul(fgets(input, length, stdin), NULL, 10);
    if (strchr(input, '\n') == NULL)
        while((c = getc(stdin)) != '\n' && c != EOF);
}

void read_employee(struct employee *e){
    char input[20];
    int c;

    printf("Firstname: ");
    read_string(e->firstname, 20);
    e->firstname[strcspn(e->firstname, "\n")] = 0;

    printf("Lastname: ");
    read_string(e->lastname, 20);
    e->lastname[strcspn(e->lastname, "\n")] = 0;

    printf("Title: ");
    read_string(e->title, 20);
    e->title[strcspn(e->title, "\n")] = 0;

    printf("ID: ");
    read_number(&(e->id), 10);

    printf("SSN: ");
    read_number(&(e->ssn), 5);
}

void print_employee(struct employee *e){
    printf("\n\nEmployee information for %s %s: \nID: %d\nSSN: %d\nTitle: %s", e->firstname, e->lastname, e->id, e->ssn, e->title);
}
