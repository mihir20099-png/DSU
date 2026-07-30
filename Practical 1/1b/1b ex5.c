#include <stdio.h>

int main()
{
    char str1[20], str2[20];
    int i = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            printf("Strings are not equal");
            return 0;
        }
        i++;
    }

    if(str1[i] == '\0' && str2[i] == '\0')
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}
