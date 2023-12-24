#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no of elements:");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("\nEnter the elements of array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n%d", getSecondMax(arr, n));
    return 0;
}
int getSecondMax(int arr[], int n)
{
    int max_1 = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max_1 < arr[i])
        {
            max_1 = arr[i];
        }
    }
    int max_2 = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max_1 > arr[i] && max_2 < arr[i])
        {
            max_2 = arr[i];
        }
    }
    return max_2;
}