#include <stdio.h>
#include <string.h>

void selectionSort(char str[][50], int n)
{
    int i, j, k, min;
    char temp[50];

    for (i = 0; i < n - 1; i++)
    {
        min = i ;

         for (j = i + 1; j < n; j++)
         {
             k = 0 ;

             while(str[j][k] == str[min][k] && str[j][k]!= '\0')
             {
                 k++ ;
             }
               if (str[j][k] < str[min][k])
            {
                min = j;
            }
        }
        strcpy(temp, str[i]);
        strcpy(str[i], str[min]);
        strcpy(str[min], temp);
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

    printf("\nStrings in ascending order:\n");

    for (i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}

