
#include <stdio.h>


int countOdd(int a[], int n)
{
    int i, count = 0;

    for(i = 0; i < n; i++)
    {
        if((a[i] & 1) != 0)
            count++;
    }

    return count;
}

int countEven(int a[], int n)
{
    int i, count = 0;

    for(i = 0; i < n; i++)
    {
        if((a[i] & 1) == 0)
            count++;
    }

    return count;
}

int main()
{
    int a[50], n, i, choice;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\n1. Count Odd Numbers");
    printf("\n2. Count Even Numbers");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Number of odd elements = %d", countOdd(a, n));
            break;

        case 2:
            printf("Number of even elements = %d", countEven(a, n));
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}

