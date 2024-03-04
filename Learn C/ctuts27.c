#include <stdio.h>
int main()
{
    //char a = 34;
    //char *ptra = &a;
    //printf("%d\n", ptra);
    //printf("%d", ptra+2);

    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    int *arrayptr = arr;
    printf("Value at position 3 of the array is %d\n", arr[3]);
    printf("The address of the first element of the array is %d\n", &arr[0]);
    printf("The address of the first element of the array is %d\n", &arr);
    printf("The address of the second element of the array is %d\n", &arr[1]);
    printf("The address of the second element of the array is %d\n", arr + 1);

    
    printf("The value value at address of the first element of the array is %d\n", *&arr[0]);
    printf("The value value at address of the first element of the array is %d\n", *arr);
    printf("The value value at address of the second element of the array is %d\n", *&arr[1]);
    printf("The value value at address of the second element of the array is %d\n", *(arr + 1));

    return 0;
}