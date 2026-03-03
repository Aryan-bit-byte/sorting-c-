#include <stdio.h>

void mergeSort(int a[], int n)
{
    int temp[n];
    int size, left, mid, right;
    int i, j, k;

    for(size = 1; size < n; size = size * 2)
    {
        for(left = 0; left < n - size; left = left + 2*size)
        {
            mid = left + size - 1;
            right = left + 2*size - 1;
            if(right >= n)
                right = n - 1;
            i = left;
            j = mid + 1;
            k = left;
            while(i <= mid && j <= right)
            {
                if(a[i] <= a[j])
                    temp[k++] = a[i++];
                else
                    temp[k++] = a[j++];
            }

            while(i <= mid)
                temp[k++] = a[i++];

            while(j <= right)
                temp[k++] = a[j++];

            for(i = left; i <= right; i++)
                a[i] = temp[i];
        }
    }

    printf("\nSorted Array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}