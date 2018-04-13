 #include "matrix.h"
/*
void matrix_addition(int* a, int* b, int* c, int row, int col)
{
    int i;

    for(i=0; i<row*col; i++)
    {
        *(c+1) = *(a+i) + *(b+i);
    }


    for(current_row=0; current_row<row; current_row++)
    {
        for(current_col=0; current_col<col; current_col++)
        {
            *(c+current_row*col + current_col) =
            *(a+current_row*col + current_col) +
            *(b+current_row*col + current_col)
        }
    }

}*/

float* matrix_multiplication(float* left, float* right, int row, int shared, int col)
{
    float* result_matrix = (float*) malloc(sizeof(float) * (row * col));
    int current_row, current_col, current_shared;

    for(current_row=0; current_row<row; current_row++)
    {
        for(current_col=0; current_col<col; current_col++)
        {
            for (current_shared = 0; current_shared< shared; current_shared++)
                *(result_matrix + (current_row*current_col)) =
                *(left + (current_row*current_shared)) * *(right +(current_shared*current_col) ) +
                *(left +(current_row*current_shared) ) * *(right +(current_shared*current_col)) +
                *(left + (current_row*current_shared)) * *(right + (current_shared*current_col));
        }
    }

    return result_matrix;
}
