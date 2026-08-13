#include <stdio.h>
#include <string.h>

void bubbleSort(char a[50][50], int n)
{
     int i, j;
    char temp[50];

    for(i=0 ; i<n-1 ; i++)
    {
        for(j=0 ; j<n-1-i ; i++)
        {
            if(strcmp(a[j] , a[j+1])>0)
            {
                strcpy(temp , a[j]) ;
                strcpy(a[j], a[j+1]) ;
                strcpy(a[j+1] , temp) ;
            }
        }
    }
}

int main()
{
    char a[50][50];
    int n, i;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", a[i]);
    }

    bubbleSort(a, n);

    printf("\nStrings in ascending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", a[i]);
    }

    return 0;
}
