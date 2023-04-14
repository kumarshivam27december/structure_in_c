#include <stdio.h>

int main() {
	int i;
    int N; // size of the array
    scanf("%d", &N); //user input

    int A[N]; // array elements
    for ( i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Initialize product as 1
    int product = 1;

    // Calculate product of all elements
    for ( i = 0; i < N; i++) {
        product = product*A[i];
    }

    // Print the product
    printf("%d\n", product);

    return 0;
}

