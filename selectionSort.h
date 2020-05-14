
void selectionSort(int *array, int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int posMenor = i;
        for(int j = i+1; j < n; j++)
        {
            if(array[j] < array[posMenor])
                posMenor = j;
        }
        int menor = array[posMenor];
        array[posMenor]=array[i];
        array[i] = menor;
    }
}
