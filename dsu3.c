#include <stdio.h>


void searchInt()
{
    int a[20], n, key, i, flag = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter integer elements:\n");
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

int main() 
{ 
searchInt() ; 

return 0 ; 
}