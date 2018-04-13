#include "op.h"

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

float do_op(float first, float second, float(*op)(float,float))
{
    return op(first,second);
}
