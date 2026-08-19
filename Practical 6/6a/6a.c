#include <stdio.h>


void selectionSort(int a[], int n)
{
    int i, j, min, temp;
    int comparisons=0 , swaps=0 ;

    for(i=0 ; i<n-1 ; i++)
    {
        min = i ;

        for(j=i+1 ; j<n ; j++)
        {
            comparisons++ ;

           if(a[j]<a[min])
           {
               min = j ;
           }
        }

        temp = a[i] ;
        a[i] = a[min] ;
        a[min] = temp ;

        swaps++ ;
    }

    printf("\nTotal comparisons = %d", comparisons);
    printf("\nTotal swaps = %d", swaps);
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


    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
