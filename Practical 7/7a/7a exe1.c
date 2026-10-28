#include <stdio.h>

int main()
{
    int a[50], n, i, j, key;
    int comparisons = 0 , shifts = 0 ;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

          for (i = 1; i < n; i++)
          {
              key = a[i] ;
              j = i-1 ;

              while(j>=0 && a[j]<key)
              {
                  comparisons++ ;

                  a[j+1] = a[j] ;
                  shifts++ ;
                  j-- ;
              }

              a[j+1] = key ;
          }

    printf("Array in descending order:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

        printf("Total Comparisons = %d" , comparisons) ;
        printf("Total Shifts = %d" , shifts) ;

    return 0;

}
