#include <stdio.h>

void search(int arr[], int low, int high, int key)
{
    int mid;

    if (low > high)
    {
        printf("Element Not Found\n");
        return;
    }

    mid = (low + high) / 2;

    if (arr[mid] == key)
    {
        printf("Element found at position %d\n", mid + 1);
        return;
    }

    if (key > arr[mid])
        search(arr, mid + 1, high, key);
    else
        search(arr, low, mid - 1, key);
}

int main()
{
    int arr[50], n, key, i;
    int low = 0, high;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter search key: ");
    scanf("%d", &key);

    high = n - 1;

    search(arr, low, high, key);

    return 0;
}
