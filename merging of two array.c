#include<stdio.h>
int main()
{
    int a[200], b[100], i, j, n1, n2; // Increased size of 'a' to hold both arrays
    printf("Enter size of the first and second arrays: ");
    scanf("%d%d", &n1, &n2);

    // Input first array
    printf("Enter elements of the first array:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    // Input second array
    printf("Enter elements of the second array:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    // Display first array
    printf("First array:\n");
    for(i = 0; i < n1; i++)
    {
        printf("%d\n", a[i]);
    }

    // Display second array
    printf("Second array:\n");
    for(i = 0; i < n2; i++)
    {
        printf("%d\n", b[i]);
    }

    // Merge arrays
    for(i = n1, j = 0; j < n2; i++, j++)
    {
        a[i] = b[j];
    }

    // Sorting the merged array
    for(i = 0; i < n1 + n2; i++)
    {
        for(j = i + 1; j < n1 + n2; j++)
        {
            if(a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    // Display sorted elements
    printf("Merged and sorted array:\n");
    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}

