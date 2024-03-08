#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("enter the size of array: ");
    scanf("%d", &n);

    // int *arr = (int *)malloc(n * sizeof(int));   // allocates garbage values.
    int *arr = (int *)calloc(n, sizeof(int));       // allocates default values.

    for (int i = 0; i < n; i++) 
        *(arr + i) = i + 1;         // starting address of memory block offset by i.

    for (int i = 0; i < n; i++)
        printf("%d\n", i[arr]);     // same as *(arr + i).
}