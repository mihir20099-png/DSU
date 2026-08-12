#include <stdio.h>
#include <string.h>

void numberSearch()
{
    int arr[50], n, key, i;
    int low = 0, high, mid;

    printf("\nEnter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted numbers:\n");

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
            return;
        }
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("Element Not Found\n");
}

void stringSearch()
{
    char arr[50][50], key[50];
    int n, i;
    int low = 0, high, mid;

    printf("\nEnter number of strings: ");
    scanf("%d", &n);

    printf("Enter sorted strings:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%s", arr[i]);
    }

    printf("Enter search string: ");
    scanf("%s", key);

    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (strcmp(arr[mid], key) == 0)
        {
            printf("String found at position %d\n", mid + 1);
            return;
        }
        else if (strcmp(key, arr[mid]) > 0)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("String Not Found\n");
}

int main()
{
    int choice;

    printf("--- MENU ---\n");
    printf("1. Number Search\n");
    printf("2. String Search\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            numberSearch();
            break;

        case 2:
            stringSearch();
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

