#include <stdio.h>
#include <string.h>

void search(char arr[50][50], int low, int high, char key[])
{
    int mid;

    if (low > high)
    {
        printf("String Not Found\n");
        return;
    }

    mid = (low + high) / 2;

    if (strcmp(arr[mid], key) == 0)
    {
        printf("String found at position %d\n", mid + 1);
        return;
    }

    if (strcmp(key, arr[mid]) > 0)
        search(arr, mid + 1, high, key);
    else
        search(arr, low, mid - 1, key);
}

int main()
{
    char arr[50][50], key[50];
    int n, i;
    int low = 0, high;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter sorted strings:\n");

    for (i = 0; i < n; i++)
        scanf("%s", arr[i]);

    printf("Enter search string: ");
    scanf("%s", key);

    high = n - 1;

    search(arr, low, high, key);

    return 0;
}
