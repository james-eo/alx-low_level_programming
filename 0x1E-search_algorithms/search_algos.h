#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stddef.h> /* for size_t */

/* Function prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binary_searching(int *array, size_t start, size_t end, int value);
int advanced_binary(int *array, size_t size, int value);
int binary_recursive(int *array, size_t left, size_t right, int value);

#endif /* SEARCH_ALGOS_H */
