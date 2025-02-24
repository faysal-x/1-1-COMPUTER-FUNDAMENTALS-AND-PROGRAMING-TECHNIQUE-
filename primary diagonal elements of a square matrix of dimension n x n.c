//write down the c programm to print the product of primary diagonal elements of a square matrix of dimension n x n




#include <stdio.h>

int main() {
    int n, i, j, product = 1;

    // Input the dimension of the square matrix
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute the product of the primary diagonal elements
    for (i = 0; i < n; i++) {
        product *= matrix[i][i];  // Primary diagonal elements are at [i][i]
    }

    // Display the product
    printf("Product of primary diagonal elements: %d\n", product);

    return 0;
}
