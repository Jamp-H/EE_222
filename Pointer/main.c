#include "pointers.h"

int main(void)
{

    int a,b,c,stringLength;
    char str1[] = "Pointers rock,";
    char str2[] = "once you get the hang of it";

    a=1;
    b=3;
    c=2;

    char* str1_ptr = str1;
    char* str2_ptr = str2;

    reorder(&a,&b,&c);
    printf("%d %d %d\n", a,b,c);

    stringLength = string_length(str1_ptr);
    printf("%d\n", stringLength);


    printf(">%s<\n",string_concat(str1_ptr, str2_ptr));
    return 0;
}
