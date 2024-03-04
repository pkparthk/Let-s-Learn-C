#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a[100], i, n, low, high, mid = 0, found = 0, key;
    printf("Enter the number of element of array\n");
    scanf("%d", &n);
    printf("Enter the %d element of array\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the key element to be searched\n");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (low <= high && !found)
    {
        mid = (low + high) / 2;
        if (key == a[mid])
        {
            found = 1;
        }
        else if (key > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (found == 1)
    {
        printf("key found at position %d\n", mid + 1);
    }
    else
    {
        printf("Key not found\n");
    }

    return 0;
}