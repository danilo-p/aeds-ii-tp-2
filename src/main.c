#include <stdio.h>
#include <stdlib.h>
#include "lib/sort.h"

/**
 * @brief      Main function
 *
 *             Complexity (average case): O(length*log(length)), as length being
 *             the size of the input array read from the input file.
 *
 * @param[in]  argc  The argc. It must be always 3, because the input and output
 *                   files must be specified on the input.
 * @param      argv  The argv[1] is the input file. The argv[2] is the output
 *                   file.
 *
 * @return     0
 */
int main(int argc, char *argv[]) {
    FILE *input, *output;
    int length, i, *array;

    // Few arguments error
    if(argc < 3) return -1;

    // Opening files
    input = fopen(argv[1], "r");
    output = fopen(argv[2], "w");

    // Failed to open input file error
    if(input == NULL) return -2;

    // Failed to open output file error
    if(output == NULL) return -3;

    // Reading the input array length
    fscanf(input, "%d\n", &length);

    array = malloc(sizeof(int) * length);

    // Reading the array
    for(i = 0; i < length; i++)
        fscanf(input, "%d", &array[i]);

    // Sorting the array
    quickSort(array, length);

    // Writing the sorted array on the output file
    for(i = 0; i < length; i++)
        fprintf(output, "%d ", array[i]);

    // Freeing the allocated memory
    free(array);

    // Failed to close input file error
    if(fclose(input) != 0) return -4;

    // Failed to close output file error
    if(fclose(output) != 0) return -5;

    return 0;
}