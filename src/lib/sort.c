#include "sort.h"

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

void quickSort (int *array, int length) {
    if(length > 1) {
        int i, j, tmp,
            first = array[0],
            last = array[length-1],
            middle = array[length / 2],
            pivot = (first > last) ?
                    (middle > first ? first : middle):
                    (middle > last ? last : middle);

        for (i = 0, j = length - 1;; i++, j--) {
            while (array[i] < pivot) i++;
            while (array[j] > pivot) j--;

            if (i >= j) break;

            tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
        }
        quickSort(array, i);
        quickSort(array + i, length - i);
    }
}