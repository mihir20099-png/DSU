#include<stdio.h> 
#include<string.h>

void searchString()
{
    char str[20][20], key[20];
    int n, i, flag = 0 , count = 0 , comparisons = 0 ;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter the strings:\n");
    for(i = 0; i < n; i++)
        scanf("%s", str[i]);

    printf("Enter string to search:\n ");
    scanf("%s", key);

    for(i = 0; i < n; i++)
    {
        comparisons++ ; 
		if(strcmp(str[i], key) == 0)
        {
            flag = 1;
            count++ ; 
        }
    }

    if(flag == 0)
        printf("String Not Found\n");
 
else
 { 
 printf("String found %d times\n " , count ) ;  
 } 
 printf("Number of comparisons performed = %d\n" , comparisons) ; 
}

int main() 
{ 
searchString() ; 

return 0 ;
}
