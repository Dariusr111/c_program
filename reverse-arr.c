#include <stdio.h>
#define MAX_SIZE 100 //Maximum size of array

int main() {
    int array[MAX_SIZE];
    int size, i;

    // Reading size of array
    printf("Enter size of the array: ");
    scanf("%d", &size);

    // Reading array elements
    printf("Enter elements in array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    //Print array in reversed order
    printf("\nArray in reverse order: ");
    for (i = size - 1; i >= 0; i--) {
        printf("%d\t", array[i]);
    }

    return 0;
    
}
