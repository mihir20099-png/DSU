#include <stdio.h>
#include <string.h>

void insertionSort(char a[50][50], int n)
{
    int i, j;
    char key[50];

    for (i = 1; i < n; i++)
    {
        strcpy(key, a[i]);
        j = i - 1;

        while (j >= 0 && strcmp(a[j], key) < 0)
        {
            strcpy(a[j + 1], a[j]);
            j--;
        }

        strcpy(a[j + 1], key);
    }
}

int main()
{
    char a[50][50];
    int n, i, longest = 0;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings:\n");
    for (i = 0; i < n; i++)
        scanf("%s", a[i]);

    insertionSort(a, n);

    printf("\nStrings in descending order:\n");
    for (i = 0; i < n; i++)
        printf("%s\n", a[i]);

        for(i=1 ; i<n ; i++)
        {
            if (strlen(a[i]) > strlen(a[longest]))
            longest = i;
        }

    printf("\nLongest string = %s", a[longest]);

    return 0;

}
