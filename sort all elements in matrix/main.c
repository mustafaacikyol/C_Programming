// C program for the above approach
#include <stdio.h>
#include <stdlib.h>


// Function to sort a matrix
void sort_matrix(int matrix[3][3], int N, int M){

	// Traverse over the matrix
	for (int i = 0; i < N; i++) {

		for (int j = 0; j < M; j++) {

			// Current minimum element
			int minimum = matrix[i][j];

			// Index of the current
			// minimum element
			int z = i;
			int q = j;

			// Check if any smaller element
			// is present in the matrix
			int w = j;

			for (int k = i; k < N; k++) {

				for (; w < M; w++) {

					// Update the minimum element
					if (matrix[k][w] < minimum) {

						minimum = matrix[k][w];

						// Update the index of
						// the minimum element
						z = k;
						q = w;
					}
				}
				w = 0;
			}

			// Swap the current element
			// and the minimum element
			int temp = matrix[i][j];
			matrix[i][j] = matrix[z][q];
			matrix[z][q] = temp;
		}
	}
}

// Function to print the sorted matrix
void printMat(int matrix[3][3],int N, int M){
	for (int i = 0; i < N; i++) {

		for (int j = 0; j < M; j++) {

			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}

// Driver Code
int main()
{
	int matrix[3][3] = { { 7, 8, 9 },{ 5, 6, 4 },{ 3, 1, 2 } };

	// Sort the matrix
	sort_matrix(matrix, 3, 3);

	// Print the sorted matrix
	printMat(matrix, 3, 3);

	return 0;
}
