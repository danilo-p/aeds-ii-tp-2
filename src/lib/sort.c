#include "sort.h"
#include "array.h"

/**
 * @brief      Selection Sort
 *
 *             Sort method that consists of piking the lowest value of the array
 *             and put it in the first position.
 *
 *             Complexity: O(length²).
 *
 * @param      array   The array
 * @param[in]  length  The length of the array
 */
void selectionSort(int* array, int length) {
    int i, j, min_position, aux;

    for(i = 0; i < length; i++) {
        min_position = i;

        for(j = i; j < length; j++)
            if(array[j] < array[min_position])
                min_position = j;

        aux = array[i];
        array[i] = array[min_position];
        array[min_position] = aux;
    }
}

/**
 * @brief      Insertion Sort
 *
 *             Sort method that consists on inserting the element on the right  
 *             position, by comparing it with the its predecessor.
 *
 * @param      array   The array
 * @param[in]  length  The length
 */
void insertionSort(int* array, int length) {
    int i;

    for (i = 1; i < length; i++) {
        int current = array[i], target_index = i-1;

        while(current < array[target_index] && target_index >= 0) {
            array[target_index+1] = array[target_index];
            target_index--;
        }

        array[target_index+1] = current;
    }
}

/**
 * @brief      Bubble Sort
 *
 *             Sort method that consists on comparing the current element with
 *             its successor. If it is greater than its successor, so they
 *             change the places and it is compared with the next element.
 *             
 *             Complexity: O(length²)
 *
 * @param      array   The array
 * @param[in]  length  The length
 */
void bubbleSort(int* array, int length) {
    int i, j, aux;

    for(i = 0; i < length; i++) {
        for(j = 0; j < (length - i - 1); j++) {
            if(array[j] > array[j+1]) {
                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
            }
        }
    }
}