#include <iostream>
using namespace std;

int repeats_finder(int(&arr)[10], int num)
{
	int counter = 0;
	for (auto i : arr)
	{
		if (num == i) counter++;
	}
	return counter;
}

void main()
{
	setlocale(LC_ALL, "");
	//3. Есть массив из 10 элементов, заполненный случайными числами в диапазоне от 0 до 5. 
	//Необходимо найти в этом массиве значения, которые встречаются больше одного раза, вывести их на экран,
	//и вывести на экран количество повторению этих значений.

	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 6;
		cout << arr[i] << "\t";
	}
	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		bool flag = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == arr[i])
			{
				flag = true;	// тут проверка встречалось ли число в массиве раньше
				break;			// чтобы не выводить одинаковые строки в ответе
			}
		}
		if (!flag && repeats_finder(arr, arr[i]) > 1)
		{
			cout << "Число " << arr[i] << " встречается в массиве " << repeats_finder(arr, arr[i]) << " раза" << endl;
		}
	}
}