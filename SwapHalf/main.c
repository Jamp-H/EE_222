#include <stdio.h>
#include <stdlib.h>
#include "swaphalf.h"

int main(int argc, char const *argv[]) {
    char str1[] = "whatever";
    char *str1_ptr = str1;

    char str2[] = "EE222";
    char *str2_ptr = str2;
    int i;

    printf("Normal String: %s\n", str1);

    swap_half(str1_ptr);

    printf("Swaped String: %s\n", str1);

    printf("Normal String: %s\n", str2);

    swap_half(str2_ptr);

    printf("Swaped String: %s\n", str2);


    return 0;
}
