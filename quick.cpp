#include "quick.h"
void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void qSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int pi = partition(arr, low, high);

        qSort(arr, low, pi - 1);
        qSort(arr, pi, high);
    }
}

int partition(int arr[], int low, int high)
{
    int pi = arr[high];
    int i = low - 1;

    for(int j = low; j < high; ++j)
    {
        if(arr[j] <= pi)
        {
            ++i;
            swap(&arr[j], &arr[i]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
