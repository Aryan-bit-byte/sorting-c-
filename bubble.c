#include <stdio.h>

void bubbleSort(int a[], int no)
{
    int i,j,temp,flag;
    for(i=0;i<no-1;i++)
    {
        flag=0;
        for(j=0;j<no-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
               temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = 1;
            }
        }
        if(flag==0) 
        break;
    }   
    printf("\nSorted Array:\n");
    for(i=0;i<no;i++)
         printf("%d ", a[i]);
    printf("\n");
}