#include<stdio.h>

void selectionSort(int arr[] , int n)
{
    int i , j , minIndex , temp ;

    for(i=0 ; i<n-1 ; i++)
    {
        minIndex = i ;

        for(j=i+1 ; j<n ; j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex = j ;
            }
        }

        temp = arr[i] ;
        arr[i] = arr[minIndex] ;
        arr[minIndex] = temp ;
    }
}

int main()
{
    int arr[50], n, i;
    int smallest, largest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, n);

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    smallest = arr[0] ;
    largest = arr[n-1] ;

    printf("\nSmallest element = %d", smallest);
    printf("\nLargest element = %d", largest);

    return 0;
}

