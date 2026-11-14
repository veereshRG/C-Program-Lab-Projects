
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, n, i;
    int sum = 0;
    int largest, smallest;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Fixed: Assigned the result of malloc to pointer p
    p = (int *) malloc(n * sizeof(int));

    // Recommended: Check if memory allocation was successful
    if (p == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    // Initialize largest and smallest with the first element
    largest = *p;
    smallest = *p;

    // Fixed: Combined calculation inside a properly braced loop
    for (i = 0; i < n; i++) {
        sum = sum + *(p + i);

        if (*(p + i) > largest) {
            largest = *(p + i);
        }
        if (*(p + i) < smallest) {
            smallest = *(p + i);
        }
    }

    average = (float) sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    // Fixed: Corrected printf format specifiers (*d -> %d, d -> %d)
    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    free(p);
    return 0;
}
