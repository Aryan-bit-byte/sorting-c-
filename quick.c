#include <stdio.h>

void quickSort(int a[], int low, int high)
{
    if(low < high)
    {
        int pivot = a[high];
        int i = low - 1;
        int temp;

        for(int j = low; j < high; j++)
        {
            if(a[j] < pivot)
            {
                i++;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[i+1];
        a[i+1] = a[high];
        a[high] = temp;
        int pi = i + 1;
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}

void quickSortWrapper(int a[], int n)
{
    quickSort(a, 0, n - 1);
    printf("\nSorted Array:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}