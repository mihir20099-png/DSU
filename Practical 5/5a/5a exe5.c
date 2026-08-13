#include<stdio.h>

void bubbleSort(int a[], int n)
{
    int i , j , temp ;
    int flag ;

    for (i = 0; i < n - 1; i++)
    {
        flag = 0;

        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;

                flag = 1;
            }
        }

        if (flag == 0)
            break;
    }
}

int main()
{
    int a[50], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    bubbleSort(a, n);

    printf("\nSorted array in descending order:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
