#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a;
    int n, key, i, flag = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));


    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            printf("Element found at position %d\n", i);
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("Element Not Found\n");
    }

    free(a);

    return 0;
}
