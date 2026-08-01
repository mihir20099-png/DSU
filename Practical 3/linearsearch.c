#include <stdio.h>
#include <string.h>


void searchInt()
{
    int a[20], n, key, i, flag = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter integer elements:\n", );
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            printf("Element found at position %d\n", i );
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Element Not Found\n");
}


void searchString()
{
    char str[50][50], key[50];
    int n, i, flag = 0;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings:\n");
    for(i = 0; i < n; i++)
        scanf("%s", str[i]);

    printf("Enter string to search: ");
    scanf("%s", key);

    for(i = 0; i < n; i++)
    {
        if(strcmp(str[i], key) == 0)
        {
            printf("String found at position %d\n", i);
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("String Not Found\n");
}

int main()
{
    int choice;

    printf("******** MENU ********\n");
    printf("1. Integer Linear Search\n");
    printf("2. String Linear Search\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            searchInt();
            break;

        case 2:
            searchString();
            break;

        default:
            printf("Invalid Choice\n");
    }

    return 0;
}
