#include <stdio.h>
#include <stdlib.h>

#include "pascal_functions.h"

int main() {
    int matrix_size;
    if (scanf("%d", &matrix_size) == 1 && matrix_size > 0 && matrix_size <= 10) {
        int *matrix = (int *)malloc((matrix_size + matrix_size) * matrix_size * sizeof(int));
        if (matrix == NULL) {
            fprintf(stderr, "Memory allocation error!");
            return EXIT_FAILURE;
        }
        int count = 0;
        for (int i = 1; count <= matrix_size * matrix_size + 1; ++i) {
            int base_matrix[i];
            find_base_triangle(base_matrix, i);
            for (int j = 0; j < i; ++j) {
                matrix[count++] = base_matrix[j];
            }
        }
        print_matrix(matrix, matrix_size);
        free(matrix);
    } else {
        fprintf(stderr, "Puck you, Verter!");
        return EXIT_FAILURE;
    }
    return 0;}