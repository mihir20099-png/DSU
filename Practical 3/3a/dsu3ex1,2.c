#include<stdio.h> 


void searchInt()
{
    int a[20], n, key, i, flag = 0 , count = 0 , comparisons = 0  ;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter integer elements:\n" );
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        comparisons++ ;

        if(a[i] == key)
        {
           
            flag = 1;
            count++  ; 
        }
    }

    if(flag == 0) { 
     printf("Element Not Found\n");
	} 
	else { 
	printf("Element found %d times \n", count);
	}
      
        printf("Number of Comparisons performed = %d\n", comparisons); 
}
int main()
{
    searchInt() ;

    return 0 ;
}
