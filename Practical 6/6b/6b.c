#include <stdio.h>
#include <string.h>

void selectionSort(char str[][50], int n)
{
    int i, j, min, count = 0;
    char temp[50];

    for (i = 0; i < n - 1; i++)
    {
        min = i ;

        for (j = i + 1; j < n; j++)
        {
            count++ ;

            if(strcmp(str[j] , str[min])<0)
            {
                min = j ;
            }
        }

        strcpy(temp , str[i]) ;
        strcpy(str[i] , str[min]) ;
        strcpy(str[min] , temp) ;
    }

     printf("\nTotal comparisons = %d", count);
}
int main()
{
    char str[50][50];
    int n, i, max = 0;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

     selectionSort(str, n);

    printf("\nSorted strings:\n");

    for (i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }

    for (i = 1; i < n; i++)
    {
        if(strlen(str[i]) > strlen(str[max]))
        {
            max = i ;
        }
    }

     printf("\nLongest string = %s", str[max]);
    printf("\nLength = %lu", strlen(str[max]));

    return 0;
}
