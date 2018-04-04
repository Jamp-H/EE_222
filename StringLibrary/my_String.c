#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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
    c = 35;
    j=0;



    for (i=0; string[i]!='\0';i++);

    while (string[i] < '!')
    {
        i--;
        end = i;
    }

    while (string[j] < '!')
    {
        j++;
        begin = j;
        if(string[j] == '\0')
        {
            break;
        }
    }

    end = i;
    begin = j;

    for (b=begin, i=0; b<end+1; b++,i++)
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
    int i,j;

    for (i=0,j=0; string[i]!='\0'; i++)
    {
        if(string[i] > '!')
        {
            string[j] = string[i];
            j++;
        }
    }
    string[j] = '\0';
}

void string_clean_white(char string[])
{
    int i=0, j=0;
    bool in_gap = true;
    while(string[i] != '\0')
    {
        //char --> whitespace and !in_gap
        if(string[i] < '!' && !(in_gap))
        //in_gap = true
        {
            //copy over '_'
            in_gap = true;
            string[j++] = ' ';
        }
        else if (string[i] < '!' && in_gap)
        {
        }
        //regular charecter
        else if ((string[i] > '!') && in_gap)
        {
            in_gap = false;
            //copy over char
            string[j++] = string[i];
        }
        i++;
    }
    //check last char if space shorten string by one
    string[j] = '\0';
}
