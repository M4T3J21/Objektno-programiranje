#include <iostream>
using namespace std;
void ArrIn(int* arr, int sizearr) 
{
	for (int i = 0; i < sizearr; i++)
	{
		cin >> arr[i]; 
	}
}
void MinAndMax(int* arr, int sizearr, int& smol, int& bigg) // Search for the biggest and smallest ones
{
	for (int i = 0; i < sizearr; i++)
	{
		if (arr[i] < smol)
		{
			smol = arr[i]; // smol is the smallest one
		}
		else if (arr[i] > bigg)
		{
			bigg = arr[i]; // bigg is the biggest one
		}
	}
}
int main()
{
	int small,big, n;
	cout << "Unesite zeljenu velicinu niza: ";
	cin >> n;
	int* arr = new int[n];
	cout << "Unesite elemente niza: \n";
	ArrIn(arr, n);
	small= big = arr[0];
	MinAndMax(arr, n, small,big);
	cout << "Najmanji clan niza je: \n" << small;
	cout << "\nNajveci clan niza je: \n" << big;
	delete[] arr;
	return 0;
}
