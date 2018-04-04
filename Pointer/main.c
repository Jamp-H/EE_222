#include "pointers.h"

int main(void)
{

    int a,b,c,stringLength;
    char str1[] = "Hello";
    char str2[] = "Screen";
    // Allocate memory for char pointer for string array
    char* str3 = (char*) malloc( sizeof(char) *(string_length(str1)
                                                        + string_length(str2)));
    a=1;
    b=3;
    c=2;

    char* str1_ptr = str1;
    char* str2_ptr = str2;

    reorder(&a,&b,&c);
    printf("%d %d %d\n", a,b,c);

    stringLength = string_length(str1_ptr);
    printf("%d\n", stringLength);

    printf(">%s<\n",string_concat(str1_ptr, str2_ptr, str3));
    return 0;
}
