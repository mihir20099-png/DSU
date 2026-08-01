
#include <stdio.h>

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = n & 1;

    if(result == 0)
        printf("Number is EVEN");
    else
        printf("Number is ODD");

    return 0;
}

