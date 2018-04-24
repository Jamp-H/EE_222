#ifndef person_h
#define person_h

#include <stdio.h>

// structure of a person's data, suitable to be used in a linked list
typedef struct person
{
    char name[32];
    int age;
    struct person* next;
}
PERSON;

// structure to represent a linked list of person records
typedef struct person_list
{
    PERSON* person_first;
    PERSON* person_last;
}
PEOPLE;

// function prototype declarations
PEOPLE* person_create_list(char* data_file_name);
float person_average_age(PEOPLE* person_list);
void person_print_age_above_average(PEOPLE* person_list);

#endif /* person_h */
