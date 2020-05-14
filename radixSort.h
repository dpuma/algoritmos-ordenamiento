
void countSortRadix(int arr[], int n, int exp)
{
    int output[n];
    int i, count[10] = {0};

    for (i = 0; i < n; i++)
        count[ (arr[i]/exp)%10 ]++; // guarda la frecuencia por digitos

    for (i = 1; i < 10; i++)
        count[i] += count[i-1]; // acumula las frecuencias para determinar las posiciones

    for (i = n-1; i >= 0; i--)
    {
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i]; // ordena los numeros en el output
        count[ (arr[i]/exp)%10 ]--; // va descontando de las frecuencias acumuladas
    }

    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

void radixSort(int arr[], int n)
{
    int m = getMax(arr, n);
    for (int exp = 1; m/exp > 0; exp *= 10)
        countSortRadix(arr, n, exp);
}
