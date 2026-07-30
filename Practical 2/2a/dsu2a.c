#include<stdio.h>

int main()
{

    int num , n , result ;

    printf("Enter a number: ") ;
    scanf("%d" , &num) ;

    printf("Enter bit position :") ;
    scanf("%d" , &n) ;

    result = num&(1<<n) ;

    if(num!=0)
    {
        printf("Bit is SET\n" , n) ;
    }
    else
    {
        printf("Bit is CLEAR\n" , n) ;

    }

    return 0 ;
}
