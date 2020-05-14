
void merge(int array[], int l, int m, int r)
{
    int i = l;
    int j = m + 1;
    int k = 0;
    int temp[r-l+1];

    while (i <= m && j <= r)
    {
        if (array[i] <= array[j])
        {
            temp[k] = array[i];
            i++; k++;
        }
        else
        {
            temp[k] = array[j];
            j++; k++;
        }
    }
    while (i <= m)
    {
        temp[k] = array[i];
        i++; k++;
    }
    while (j <= r)
    {
        temp[k] = array[j];
        j++; k++;
    }

    for (int p = l; p <= r; p++)
        array[p] = temp[p-l];
}

void mergeSort(int *array, int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergeSort(array, l, m);
        mergeSort(array, m + 1, r);
        merge(array, l, m, r);
    }
}
