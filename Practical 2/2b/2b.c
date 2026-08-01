
#include <stdio.h>

int maxAND(int a[], int n)
{
    int i, j, max = 0;

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if((a[i] & a[j]) > max)
                max = a[i] & a[j];
        }
    }

    return max;
}

int maxOR(int a[], int n)
{
    int i, j, max = 0;

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if((a[i] | a[j]) > max)
                max = a[i] | a[j];
        }
    }

    return max;
}

int main()
{
    int a[50], n, i, choice;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\n1. Maximum AND");
    printf("\n2. Maximum OR");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Maximum AND value = %d", maxAND(a, n));
            break;

        case 2:
            printf("Maximum OR value = %d", maxOR(a, n));
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}

