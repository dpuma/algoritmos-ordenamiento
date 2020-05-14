
void countingSort(int* array, int n)
{
    int menor = numMenor(array, n);
    int mayor = numMayor(array, n);
    int range = mayor - menor + 1;

    int output[n];
    int i, count[range] = {0};

    for(i = 0; i < n; i++)
        count[array[i]-menor]++;

    for(i = 1; i < range; i++)
        count[i] += count[i-1];

    for(i = n-1; i >= 0; i--)
    {
        output[ count[array[i]-menor] -1 ] = array[i];
            count[array[i]-menor]--;
    }

    for(i = 0; i < n; i++)
        array[i] = output[i];
}
