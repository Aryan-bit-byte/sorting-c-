#include<stdio.h>
#include "bubble.c"
#include "insertion.c"
#include "selection.c"
#include "quick.c"
#include "merge.c"

int main()
{
    int n, no, i;
    int a[1000];
    
    printf("\nSelect the type of sorting: \n");
    printf("\n1. Bubble");
    printf("\n2. Insertion");
    printf("\n3. Selection");
    printf("\n4. Quick");
    printf("\n5. Merge");
    printf("\nEnter your choice: \n");
    scanf("%d", &n);
    
    printf("Enter number of elements: ");
    scanf("%d", &no);
    printf("Enter array elements: ");
    for(i = 0; i < no; i++)
        scanf("%d", &a[i]);
    
    switch(n)
    {
        case 1: bubbleSort(a, no); break;
        case 2: insertionSort(a, no); break;
        case 3: selectionSort(a, no); break;
        case 4: quickSortWrapper(a, no); break;
        case 5: mergeSort(a, no); break;
        default: printf("Invalid choice!");
    }
    
    return 0;}