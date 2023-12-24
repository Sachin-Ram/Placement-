#include <stdio.h>
#include <stdlib.h>
int *getFirstAndLastOccurrence(int arr[], int n, int k);
int main()
{
    int n, k;
    printf("Enter the no of elements:");
    scanf("%d", &n);
    printf("\nEnter the X value:");
    scanf("%d", &k);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("\nEnter the elements of array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *result = getFirstAndLastOccurrence(arr, n, k);
    for (int i = 0; i < 2; i++)
    {
        printf("%d ", result[i]);
    }
    free(arr);
    free(result);
    return 0;
}
int *getFirstAndLastOccurrence(int arr[], int n, int k)
{
    int *result = (int *)malloc(2 * sizeof(int));
    result[0] = -1, result[1] = -1;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == k)
        {
            if (result[0] == -1)
                result[0] = i;
            result[1] = i;
        }
    }
    return result;
}