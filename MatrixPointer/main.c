#include "matrix.h"


int main(void)
{
    int i,j;
    float left_matrix[2][3] = {{1,2,3},{4,5,6}};
    float right_matrix[3][4] = {{7,8,9,10},{11,12,13,14},{15,16,17,18}};


    float* left = &left_matrix[0][0];
    float* right = &right_matrix[0][0];
    float* result_matrix;

    matrix_multiplication(left, right, 2, 3, 4);

    for (i = 0; i < 8; i++)
    {
        printf("%f\n", *(result_matrix + (i)));
    }
}
