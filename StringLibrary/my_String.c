#include <stdio.h>
#include <stdlib.h>
#include "my_String.h"

int string_length(char string[])
{
    int i;

    for (i=0; string[i]!='\0';i++);
    return i;
}

void string_truncate(char string[], char clean_string[])
{
    //Gets rid of trailing "whitespace" and only include valid characters
    int stringLength, i, j, begin, end, b;
    char c;
    c = 34;
    j=0;

    end = i;
    begin = j;

    for (i=0; string[i]!='\0';i++);

    while (string[i] <= c)
    {
        i--;
        end = i;
    }

    while (string[j] <= c)
    {
        j++;
        begin = j;
    }


    for (b=begin, i=0; b<end; b++,i++)
    {
        clean_string[i] = string[b];
    }
    clean_string[i] = '\0';
}


void string_concat(char first[], char second[], char result[])
{
    int i,offset;
    for(i=0; first[i]!='\0'; i++)
    {
        result[i] = first[i];
    }

    offset = i;

    for(i=0; second[i] != '\0'; i++, offset++)
    {
        result[offset] = second[i];
    }

    result[offset] = '\0';
}


void string_delete_white(char string[])
{
    int i,j,length;
    char c = 32;

    for(length=0; string[length]!='\0'; length++);

    for (i=0,j=0;i<length; i++)
    {
        if(!(string[i]<=c))
        {
            string[j] = string[i];
            j++;
        }
        string[j] = '\0';
    }
}
