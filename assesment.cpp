#include <stdio.h>

// Function to multiply two matrices
void multiplyMatrices(int mat1[][100], int mat2[][100], int result[][100], int rows1, int cols1, int rows2, int cols2) {
    // Check if matrices can be multiplied
    if (cols1 != rows2) {
        printf("Error: Matrices cannot be multiplied. Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return;
    }

    // Perform matrix multiplication
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;

            // Multiply the row of the first matrix with the column of the second matrix
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to input a matrix from the user
void inputMatrix(int matrix[][100], int rows, int cols, char label) {
    printf("Enter elements for %c matrix:\n", label);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][100], int rows, int cols, char label) {
    printf("\n%c Matrix:\n", label);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[100][100], mat2[100][100], result[100][100];
    int rows1, cols1, rows2, cols2;

    // Get dimensions for the matrices
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &cols1);
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &cols2);

    // Input matrices
    inputMatrix(mat1, rows1, cols1, 'A');
    inputMatrix(mat2, rows2, cols2, 'B');

    // Multiply matrices
    multiplyMatrices(mat1, mat2, result, rows1, cols1, rows2, cols2);

    // Display matrices and result
    displayMatrix(mat1, rows1, cols1, 'A');
    displayMatrix(mat2, rows2, cols2, 'B');

    if (cols1 == rows2) {
        displayMatrix(result, rows1, cols2, 'C');
    }

    return 0;
}


