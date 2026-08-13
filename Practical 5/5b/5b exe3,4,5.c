#include <stdio.h>
#include <string.h>

void bubbleSort(char a[50][50], int n)
{
    int i, j;
    int comparisons = 0;
    char temp[50];

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            comparisons++;

            if (strcmp(a[j], a[j + 1]) > 0)
            {
                strcpy(temp, a[j]);
                strcpy(a[j], a[j + 1]);
                strcpy(a[j + 1], temp);
            }
        }
    }

    printf("\nTotal comparisons = %d", comparisons);
}

int main()
{
    char a[10][50];
    int n, i;
    int shortest = 0, longest = 0;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings:\n");
    for (i = 0; i < n; i++)
        scanf("%s", a[i]);

    bubbleSort(a, n);

    printf("\nStrings in ascending order:\n");
    for (i = 0; i < n; i++)
        printf("%s\n", a[i]);

    for (i = 1; i < n; i++)
    {
        if (strlen(a[i]) < strlen(a[shortest]))
            shortest = i;

        if (strlen(a[i]) > strlen(a[longest]))
            longest = i;
    }

    printf("\nShortest string = %s", a[shortest]);
    printf("\nLongest string = %s", a[longest]);

    return 0;
}
