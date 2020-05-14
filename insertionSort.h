
void insertionSort(int *array, int n)
{
    int pos, test;
    for (int i = 1; i < n; i++)
    {
        pos = i-1;
        test = array[i];
        while (test < array[pos] && pos >= 0)
        {
            array[pos+1] = array[pos];
            pos--;
        }
        array[pos+1] = test;
    }
}
