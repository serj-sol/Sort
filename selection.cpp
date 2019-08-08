#include "globals.h"
#include "selection.h"
#include <iostream>

void selectionSort(int arr[], int size)
{
    for(int i = 0; i < size; ++i)
    {
        ++counter;
        for(int j = i + 1; j < size; ++j)
        {
            ++counter;
            if(arr[j] < arr[i])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    std::cout << "\nКоличество действий во время сортировки: " << counter << std::endl;
}
