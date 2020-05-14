
int particion(int arr[], int ini, int fin)
{
    int pivot = arr[fin];
    int pIndex = ini;

    for(int i=ini; i<fin; i++)
    {
        if(arr[i] < pivot)
        {
            int temp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = temp;
            pIndex++;
        }
    }
    int temp = arr[fin];
    arr[fin] = arr[pIndex];
    arr[pIndex] = temp;

    return pIndex;
}

void quickSort(int arr[], int ini, int fin)
{
    if(ini < fin)
    {
        int p = particion(arr, ini, fin);
        quickSort(arr, ini, (p-1));
        quickSort(arr, (p+1), fin);
    }
}
