#include <stdio.h>
#include <string.h>

void selectionSort(char str[][50], int n)
{
    int i, j, max, count = 0;
    char temp[50];

    for (i = 0; i < n - 1; i++)
    {
        max = i ;

        for (j = i + 1; j < n; j++)
        {

            if(strcmp(str[j] , str[min])>0)
            {
                max = j ;
            }
        }

        strcpy(temp , str[i]) ;
        strcpy(str[i] , str[max]) ;
        strcpy(str[max] , temp) ;
    }

}

int main()
{
    char str[50][50];
    int n, i;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }


    selectionSort(str, n);

    printf("\nStrings in descending order:\n");

    for (i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;

}
