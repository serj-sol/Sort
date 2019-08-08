#include "bubble.h"
void bubbleSort(int arr[], int size)
{
    int newSize = size - 1;
    for(int i = 0; i < size  ; ++i, newSize--)
    {
        for(int j = 0; j < newSize; ++j)
        {
            if(arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
