#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int size = 10;
	int array[]{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int array2[size];
	int n;
	cout << "Сдвинуть массив влево на: "; cin >> n;
	for (int i = 0; i < size - n; i++)
	{
		array2[i] = array[i + n];
	}
	for (int i = 0; i < n; i++)
	{
		array2[size - n + i] = array[i];
	}


	for (int i : array2)
	{
		cout << i << "\t";
	}
}