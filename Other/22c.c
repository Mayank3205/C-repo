#include <stdio.h>

int main() {
    int row = 6; // Number of rows
    int i, j, space;

    for (i = row; i > 0; i--) {
        // Print left side stars
        for (j = 0; j < i; j++) {
            printf("**");
        }
        
        // Print spaces in the middle
        space = (row - i) * 4; // Spaces increase as rows decrease
        for (j = 0; j < space; j++) {
            printf(" ");
        }

        // Print right side stars (only if i > 1 to avoid duplicate)
        for (j = 0; j < i; j++) {
            printf("**");
        }

        printf("\n");
    }

    return 0;
}
