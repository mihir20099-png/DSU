
#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if((n & 1) == 0)
        printf("Number is divisible by 2");
    else
        printf("Number is not divisible by 2");

    return 0;
}

