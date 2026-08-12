#include <stdio.h>
#include <string.h>

int main()
{
    char arr[50][50], key[50];
    int n, i, low, high, mid;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings in descending order:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%s", arr[i]);
    }

    printf("Enter search string: ");
    scanf("%s", key);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (strcmp(arr[mid], key) == 0)
        {
            printf("String found at position %d\n", mid + 1);
            return 0;
        }
        else if (strcmp(key, arr[mid]) < 0)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("String Not Found\n");

    return 0;
}
