#ifndef OP_H
#define OP_H

#include <stdio.h>
#include <stdlib.h>

float add(float first, float second);
float sub(float first, float second);
float mult(float first, float second);
float divi(float first, float second);
float do_op(float first, float second, float(*op)(float,float));

#endif
