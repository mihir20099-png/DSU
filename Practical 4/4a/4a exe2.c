#include <stdio.h>

int main()
{
    int arr[50], n, key;
    int low = 0, high, mid, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in descending order:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter search key: ");
    scanf("%d", &key);

    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            printf("Element found at position %d\n", mid + 1);
            return 0;
        }
        else if (key < arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("Element Not Found\n");

    return 0;
}
