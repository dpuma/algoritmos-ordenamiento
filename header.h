#include<iostream>
using namespace std;

void imprimirArray(int*array, int n)
{
    for(int i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << endl;
}

int getMax(int array[], int n)
{
    int mx = array[0];
    for (int i = 1; i < n; i++)
        if (array[i] > mx)
            mx = array[i];
    return mx;
}

int numMenor(int* array, int n)
{
    int menor = array[0];
    for(int i = 1; i < n; i++)
        if(array[i] < menor)
            menor = array[i];
    return menor;
}

int numMayor(int* array, int n)
{
    int mayor = array[0];
    for(int i = 1; i < n; i++)
        if(array[i] > mayor)
            mayor = array[i];
    return mayor;
}

