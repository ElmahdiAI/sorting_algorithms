#include "sort.h"
/**
 * shell_sort - Sorts an array of integers in ascending order using the Shell sort algorithm.
 * @array: Pointer to the first element of the array.
 * @size: The number of elements in the array.
 */
void shell_sort(int *array, size_t size) {
    int interval = 1;
    while (interval <= size / 3)
        interval = interval * 3 + 1;

    while (interval > 0) {
        printf("Array at interval %d:\n", interval);
        for (int i = interval; i < size; i++) {
            int temp = array[i];
            int j = i;
            while (j >= interval && array[j - interval] > temp) {
                array[j] = array[j - interval];
                j -= interval;
            }
            array[j] = temp;
        }
        for (int i = 0; i < size; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
        interval = (interval - 1) / 3;
    }
}