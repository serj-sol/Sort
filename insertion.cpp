#include "insertion.h"
#include "globals.h"

void insertionSort(int arr[], int size)
{
    bool isAdd = false;
    int sortArr[size] = {0};
    sortArr[0] = arr[0];
    for(int i = 1; i < size; ++i)   // Цикл прохода по исходному массиву.
    {

        for(int j = i - 1; j >= 0; --j)   // Цикл прохода по новому массиву.
        {

            if(sortArr[j] > arr[i] && !isAdd)
            {
                sortArr[j+1] = sortArr[j];
                sortArr[j] = -1;

            }
            else
            {
                sortArr[j+1] = arr[i];
                isAdd = true;
                break;
            }
        }
        if(!isAdd)
            sortArr[0] = arr[i];
        isAdd = false;
    }
    for(int i = 0; i < size; ++i)
        arr[i] = sortArr[i];
}
