#include <stdio.h>
#include <stdlib.h>
#define DATA_FILE "times_table_B.data"

int read_result(FILE* stream, int first, int second);

int main(void)
{
    FILE* times_table = fopen(DATA_FILE, "r");
    int first, second, result;

    //times_table = fopen(DATA_FILE, "r");
    if (times_table == NULL)
    {
        printf("Opening file %s failed\n", DATA_FILE);

        return EXIT_FAILURE;
    }


    printf("Enter a multiplication problem (x * y): ");
    scanf("%d * %d", &first, &second);
    result = read_result(times_table, first, second);
    printf("%d * %d = %d \n", first, second, result);
    fclose(times_table);


    return EXIT_SUCCESS;
}

int read_result(FILE* stream, int first, int second)
{
    int value;
    int position;

    position = (first - 1)*10 + (second - 1);
    fseek(stream, position * sizeof(int), SEEK_SET);
    fread(&value, sizeof(int), 1, stream);

    return value;

}
