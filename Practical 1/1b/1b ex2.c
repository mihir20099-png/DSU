#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    int i, n;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    for(i = 0; i < n/2; i++)
    {
        if(str[i] != str[n-1-i])
        {
            printf("Not a Palindrome");
            return 0;
        }
    }

    printf("Palindrome");

    return 0;
}
