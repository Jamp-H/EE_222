#include <stdio.h>
#include <stdlib.h>

float add(float first, float second);
float sub(float first, float second);
float mult(float first, float second);
float divi(float first, float second);
float do_op(float first, float second, float(*op)(float,float));

int main(int argc, char *args[])
{
    float a,b;
    int i = 0;

    float (*op_array[])(float,float) = {add,sub,mult,divi,NULL};

    sscanf(args[1], "%f", &a);
    sscanf(args[2], "%f", &b);

    while (op_array[i] != NULL)
    {
        printf("Result: %f\n", (*op_array[i++])(a, b));
    }


    return 0;
}

float add(float first, float second)
{
    float result;

    result = first + second;

    return result;
}

float sub(float first, float second)
{
    float result;

    result = first - second;

    return result;
}

float mult(float first, float second)
{
    float result;

    result = first * second;

    return result;
}

float divi(float first, float second)
{
    float result;

    result = first / second;

    return result;
}
