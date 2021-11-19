#include <iostream>
#include <iomanip>
using namespace std;

void input(int* arr, int arrsize)
{
    int i = 0;
    for (i; i < arrsize; i++)
    {
        cout << i << "-ti clan niza je: " << endl;
        cin >> arr[i];
    }
}

int smallest(int* arr, int size, int min)
{
    if (min > arr[size]) // If the current number is lower than min it becomes the min in the next line //
        min = arr[size];
    if (size == 0)
        return min;
    smallest(arr, size - 1, min);
}

int biggest(int* arr, int size, int max)
{
    if (max < arr[size]) 
        max = arr[size];
    if (size == 0)
        return max;
    biggest(arr, size - 1, max);
}

int main()
{
    int big, smol, arrsize, *arr;
    cout << "Unesite broj clanova niza: ";
    cin >> arrsize;

    arr = new int[arrsize];
    input(arr, arrsize);

    big = arr[arrsize - 1];
    smol = arr[arrsize - 1];

    big = biggest(arr, arrsize - 1, big);
    smol = smallest(arr, arrsize - 1, smol);

    cout << "\nNajveci broj: " << big << "\nNajmanji broj: " << smol;
    delete[] arr;
}
