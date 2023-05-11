#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void randomize(int(&arr)[10])
{
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		arr[i] = rand() % RAND_MAX + 1;
	}
}
void bubble_sort(int(&arr)[10])
{
	for (int i = 0; i < sizeof(arr) / sizeof(int) - 1; i++)
	{
		for (int j = 0; j < sizeof(arr) / sizeof(int) - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int buffer = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = buffer;
			}
		}
	}
}

void main()
{
	setlocale(LC_ALL, "");
	int arr[10];
	randomize(arr);
	for (int i : arr)
	{
		cout << i << "\t";
	}
	cout << endl;
	bubble_sort(arr);
	for (int i : arr)
	{
		cout << i << "\t";
	}
}