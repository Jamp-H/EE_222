#include <stdio.h>
#include <stdlib.h>
#include "dbg.h"

#define FILENAME "people_data.txt"

// define structure to represent a person's data
struct person {
    char name[32];
    int age;
};

typedef struct person PERSON;

int main(void)
{

    // declare variables.  */
    FILE* people_data;
    int number_records;
    PERSON people[10];

    int i=0;
    int age_total = 0, age_average;

    /*  Read and print information from the file.  */
    probe(people_data = fopen(FILENAME,"r"), "error opening file");

    // read number of records from the very beginning of the file
    // ...
    fscanf(people_data, "%d", &number_records);
    printf("%d\n", number_records);

    // for-loop through the records of the file and read each persons information,
    // putting the information into the elements of the array of structures
    // while doing this, add up age_total
    for (i=0; age_total=0; i<number_records;++)
    {
        fscanf(people_data;"%s %d", people[i].name, people[i].age);
        age_total += people[i++].age];
    }

    // determine average age of all persons
    // ...

    // for-loop through all records in the array of person structures
    // and print out all names of persons whose age is above average
    // ...

    fclose(people_data);

    return EXIT_SUCCESS;

error:
    // free any resources ... and then return ...
    return EXIT_FAILURE;
}
