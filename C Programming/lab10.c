// Write a C Program to perform bubble sorting in ascending order
#include <stdio.h>
int main()
{
    int n, i, j, temp, a[50];
    printf("Enter the number of elements ");
    scanf("%d", &n);
    printf("Enter the elements \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("The sorted list of elements is \n");
    for (i = 0; i < n; i++)
        printf("%d \t", a[i]);
    return 0;
}
