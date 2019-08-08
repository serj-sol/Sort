#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "bubble.h"
#include "selection.h"
#include "insertion.h"
#include "merge.h"
#include "quick.h"

void printArr(int arr[], int size);

int main(int argc, char *argv[])
{
    const int size = 25;
    srand(time(NULL));
    int nonSortedArr[size];
    for(int i = 0; i < size; ++i)
        nonSortedArr[i] = rand() % 1000;
    std::cout << "Before sort\n";
    printArr(nonSortedArr, size);
    std::cout << "Sorting...\n";
//    bubbleSort(nonSortedArr, size);
//    selectionSort(nonSortedArr, size);
//    insertionSort(nonSortedArr, size);
//    mergeSort(nonSortedArr, 0, size - 1);
//    qSort(nonSortedArr, 0, size - 1);
    std::cout << "After sort\n";
    printArr(nonSortedArr, size);
    return 0;
}

void printArr(int arr[], int size)
{
    for(int i = 0; i < size; ++i)
    {   if(!(i % 13))
            std::cout << std::endl;
        std::cout << std::setw(3) << arr[i] << " ";
    }
    std::cout << std::endl;
}
