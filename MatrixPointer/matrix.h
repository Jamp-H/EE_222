#ifndef MATRIX_H
#define MATRIX_H

#include <stdio.h>
#include <stdlib.h>

//void matrix_addition(int* a, int* b, int* c, int row, int col);
float* matrix_multiplication(float* left, float* right, int row, int shared, int col);

#endif
