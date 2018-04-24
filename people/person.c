#include "person.h"
#include <stdlib.h>
#include "dbg.h"

/*
 * Populate a single list of person structures with person data from a file and
 * return a pointer to the a structure of type PEOPLE.
 * A NULL pointer is returned, when:
 * - If there is no data in the file
 * - If there is an error reading the file. In addition, an error message is printed out on std error
 */
PEOPLE* person_create_list(char* data_file_name)
{
    // declare variables
    FILE* people_data;
    PERSON *person_first, *person_last, *person_next;
    PEOPLE* person_list = malloc(sizeof(PEOPLE));

    // set the first person to NULL and the last person to the first person
    person_first = NULL;
    person_last = person_first;

    // provide space for the next persons' structure
    person_next = malloc(sizeof(PEOPLE));

    // open the data file
    people_data = fopen(data_file_name,"r");

    // we read the first record separately as that removes the need to check,
    // if the first person has already been set, every time we read a record
    if (fscanf(people_data,"%s %d", person_next->name, &person_next->age) == 2)
    {
        // there is a first record, so set first/last person to next person
        // also set the pointer to the next person to NULL
        person_first = person_next;
        person_last = person_next;
        person_next = NULL;
    }
    else
    {
        // there is no data in the file,
        // free the memory we created for the current person and person list and return NULL
        free(person_next);
        free(person_list);
        return NULL;
    }

    // keep reading records until there is nothing to read any more
    person_next = (PERSON *) malloc(sizeof(PERSON));
    while (fscanf(people_data,"%s %d", person_next->name, &person_next->age) == 2)
    {
        // we successfully read one record:
        // - update the 'next' pointer of the last person to be the next person
        // - set the pointer to last person to the next one, which is now the last
        // - update the next pointer of the new last person to point to NULL
        person_last->next = person_next;
        person_last = person_next;
        person_next = NULL;

        // provide space for the new next person
        person_next = malloc(sizeof(PERSON));
    }

    // free the memory for the next person that we created in advance
    free(person_next);

    // close the data file
    fclose(people_data);

    // populate person list with first/last person pointers
    person_list->person_first = person_first;
    person_list->person_last = person_next;

    return person_list;

error:
    // free space for next person and person list and return NULL
    free(person_next);
    free(person_list);
    return NULL;
}


/*
 * Return the age average of all persons in the list
 */
float person_average_age(PEOPLE* person_list)
{
    // declare and initialize variables
    int number_persons = 0;
    float age_total = 0;
    PERSON* person_current = person_list->person_first;

    // run through the linked list until we hit NULL as the next person
    while (person_current != NULL)
    {
        // update number of persons
        // add age to age total
        // update pointer to the person that we will look at next
        number_persons++;
        age_total += person_current->age;
        person_current = person_current->next;
    }

    // return age average
    return (age_total/number_persons);
}


/*
 * Print the names of all persons, whose age is above average
 */
void person_print_age_above_average(PEOPLE* person_list)
{
    // declare and initialize variables
    float average_age = person_average_age(person_list);
    PERSON* person_current = person_list->person_first;

    // run through the linked list until we hit NULL as the next person
    while (person_current != NULL)
    {
        // compare age of this person with average and possibly print name
        if( (person_current->age) > average_age)
        {
            printf("%s\n", person_current->name);
        }

        // update pointer to the person that we will look at next
        person_current = person_current->next;
    }
}
