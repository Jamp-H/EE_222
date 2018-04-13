#include "op.h"

int main(void)
{
    float (*op_array[])(float,float) = {add,sub,mult,divi,NULL};

    printf("Result: %f\n", do_op(12, 6, divi));
    printf("Result: %f\n", op_array[2](4, 2));

    return 0;
}
