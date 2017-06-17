#ifndef SORT_H
#define SORT_H

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
void selectionSort(int* array, int length);

/**
 * @brief      Insertion Sort
 *
 *             Sort method that consists on inserting the element on the right  
 *             position, by comparing it with the its predecessor.
 *
 * @param      array   The array
 * @param[in]  length  The length
 */
void insertionSort(int* array, int length);

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
void bubbleSort(int* array, int length);

/**
 * @brief      Quick Sort
 *
 *             Sort method that consists on selecting a pivot of the array and
 *             moving elements lower than the pivot to the left and greater than
 *             the pivot to the right. Then, the pivot stays on the right
 *             position and the left and right arrays are sorted with the same
 *             logic.
 *
 *             Complexity: O(length*log(length))
 *
 * @param      array   The array
 * @param[in]  length  The length
 */
void quickSort(int* array, int length);

#endif