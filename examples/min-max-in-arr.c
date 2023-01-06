#include <stdio.h>
int main()
{
    int arr[100]; // 100 - Maximum size of the array
    int i, max, min, size;
   // Reading array size & elements in the array
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    /* Supposes the first element as maximum and minimum */
    max = arr[0];
    min = arr[0];
    /*
     * Finds maximum and minimum in all array elements.
     */
    for(i=1; i<size; i++)
    {
        // Finding max number
        //if cuurent element of array is greater than max
        if(arr[i]>max)
        {
            max = arr[i];
        }
        // Finding min number
        // If current element of array is smaller than min
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }    
    //Finding the maximum and minimum element
    printf("Maximum element is: %d\n", max);
    printf("Minimum element is: %d", min);
    return 0;
}