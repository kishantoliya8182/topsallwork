#include <stdio.h>

int main() {
    int n = 10; // Change this value if you want a different size
    int matrix[n][n];
    int count = 1;

    // Fill the matrix with the pattern
    for (int layer = 0; layer < n / 2; layer++) {
        // Top row
        for (int i = layer; i < n - layer; i++) {
            matrix[layer][i] = count++;
        }

        // Right column
        for (int i = layer + 1; i < n - layer; i++) {
            matrix[i][n - layer - 1] = count++;
        }

        // Bottom row
        for (int i = n - layer - 2; i >= layer; i--) {
            matrix[n - layer - 1][i] = count++;
        }

        // Left column
        for (int i = n - layer - 2; i > layer; i--) {
            matrix[i][layer] = count++;
        }
    }

    // Print the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
