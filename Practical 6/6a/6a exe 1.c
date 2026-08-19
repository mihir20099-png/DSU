#include <stdio.h>


void selectionSort(int a[], int n)
{
    int i, j, max, temp;

    for(i=0 ; i<n-1 ; i++)
    {
        max = i ;

        for(j=i+1 ; j<n ; j++)
        {

           if(a[j]>a[max])
           {
               max = j ;
           }
        }

        temp = a[i] ;
        a[i] = a[max] ;
        a[max] = temp ;

    }
}

int main()
{
    int a[50], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    selectionSort(a, n);

    printf("\nSorted array in descending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

