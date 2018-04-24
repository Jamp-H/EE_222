#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

#include "dbg.h"

#define FILENAME "people_data.txt"

int main(void)
{
    // variables
    PEOPLE* person_list;
    
    // create a person list from data in a file
    person_list = person_create_list(FILENAME);
    if (person_list == NULL) {
        // there is no data in the file or there was an error reading the data
        return EXIT_FAILURE;
    }
    
    // compute the average age of all persons
    printf("Average age: %f\n", person_average_age(person_list));
    
    person_print_age_above_average(person_list);
    
    return EXIT_SUCCESS;
}
