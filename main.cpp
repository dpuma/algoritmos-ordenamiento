#include "header.h"
#include "insertionSort.h"
#include "selectionSort.h"
#include "radixSort.h"
#include "countingSort.h"
#include "quickSort.h"
#include "mergeSort.h"

int main()
{
    int array[] = {8,2,1,4,3,13,0,6,1,1};
    int n = sizeof(array) / sizeof(array[0]);

    imprimirArray(array,n);

    //insertionSort(array, n);
    //selectionSort(array, n);
    //radixSort(array, n);
    //countingSort(array, n);
    //quickSort(array, 0, n-1);
    mergeSort(array, 0, n-1);

    cout << "ordenado: " << endl;
    imprimirArray(array,n);




}
