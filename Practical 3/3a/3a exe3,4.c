#include <stdio.h>

void findLargest()
{
    int a[20], n, i, largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);


    largest = a[0];


    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            largest = a[i];
        }
    }

    printf("Largest element = %d\n", largest);
}


void findSmallest()
{
    int a[20], n, i, smallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    smallest = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] < smallest)
        {
            smallest = a[i];
        }
    }

    printf("Smallest element = %d\n", smallest);
}



int main()
{
    int choice;

    printf(" MENU\n");
    printf("1. Find Largest Element\n");
    printf("2. Find Smallest Element\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            findLargest();
            break;

        case 2:
            findSmallest();
            break;

        default:
            printf("Invalid Choice\n");
    }

    return 0;
}
