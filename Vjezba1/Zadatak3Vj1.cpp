#include <iostream>
using namespace std;

void input(int* arr, int arrsize)
{
    int i=0;
    for (i; i < arrsize; i++) 
    {
        cout << i << "-ti clan niza je: "<< endl;
        cin >> arr[i];
    }
}
/*
void maxmin(int *niz, int *max1, int *min1, int n)
{
    int i;
    *max1 = niz[0];
    *min1 = niz[0];
    for (i = 0; i <= n; ++i)
    {
        if (niz[i] > *max1)
            *max1 = niz[i];
        if (niz[i] < *max1)
            *min1 = niz[i];
    }
}
*/
void smallest(int* arr, int* min, int arrsize)
{
    int i;
    *min = arr[0]; //Number with index 0 is set as the smallest value of array//
    for (i = 0; i <= arrsize; i++)
    {
        if (arr[i] < *min) // If the number with index i is smaller than min it becomes the min //
            *min = arr[i];
    }
}
void biggest(int* arr, int* max, int arrsize)
{
    int i;
    *max = arr[0]; 
    for (i = 0; i <= arrsize; i++)
    {
        if (arr[i] > *max) 
            *max = arr[i];
    }
}
int main()
{
    int big, small, velniza, *niz;
    cout << "Unesite velicinu vaseg niza: " << endl;
    cin >> velniza;
    niz = (int*)malloc(velniza * sizeof(int)); // Alocating memory for the array //
    input(niz, velniza);
    biggest(niz, &big, velniza - 1);
    smallest(niz, &small, velniza - 1);
    cout << "Najveci clan u nizu je:  " << big << endl;
    cout << "Najmanji clan u nizu je: " << small << endl;
    free(niz); // #FREEMEMORY //
}
