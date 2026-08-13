//Bubble sort

#include<stdio.h>

void bubbleSort(int a[], int n)
{
    int i , j , temp ;
    int swaps = 0, comparisons = 0;

    for(i=0 ; i<n-1 ; i++)
    {
        for(j=0 ; j<n-1-i ; j++)
        {
            comparisons++ ;

            if(a[j]>a[j+1])
            {
                temp = a[j] ;
                a[j] = a[j+1] ;
                a[j+1] = temp ;

                swaps++ ;
            }
        }
    }

    printf("\nTotal comparisons = %d", comparisons);
    printf("\nTotal swaps = %d\n", swaps);
}


int main()
{
    int a[50], n, i;


    printf("Enter the number of elements: ");
    scanf("%d", &n);


    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }


    bubbleSort(a, n);


    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nLargest element = %d", a[0]);
    printf("\nSmallest element = %d", a[n - 1]);

    return 0;
}
