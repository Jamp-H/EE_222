#include "swaphalf.h"

void swap_half(char* string)
{
    int stringLength,from,to,i;
    // Get length of string
    while (*(string+i) != '\0') stringLength++,i++;



    mirror(string,0,stringLength-1);
}

void mirror(char *string, int from, int to)
{
    int i=0, loops = ((to-from+1)/2);
    char letter;
    //"whatever" into "revetahw"
    //Half swaps a string
    while(i<loops)
    {
        letter = *(string+from+i);
        *(string+(from+i)) = *(string+(to-i));
        *(string+to-i) = letter;
        i++;
    }
}
