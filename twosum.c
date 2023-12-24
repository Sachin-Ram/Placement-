#include <stdio.h>
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
    int result = twoSum(arr, n, k);
    if (result == 0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
    return 0;
}
int twoSum(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                return 1;
            }
        }
    }
    return 0;
}