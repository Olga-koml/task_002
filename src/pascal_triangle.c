#include <stdio.h>
#include <stdlib.h>

#include "pascal_functions.h"

int main() {
    int number_lines;
    if (scanf("%d", &number_lines) == 1 && number_lines > 0 && number_lines <= 30) {
        int base_triangle[number_lines];
        find_base_triangle(base_triangle, number_lines);
        output_base_triangle(base_triangle, number_lines);
    } else {
        fprintf(stderr, "Puck you, Verter!");
        return EXIT_FAILURE;
    }
    return 0;
}