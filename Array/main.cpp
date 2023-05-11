#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int size = 5;
	int array[size];

	//Задаем значение элементов массива
	for (int i = 0; i < size; i++)
	{
		cout << "Введите " << i + 1 << "-й элемент массива: "; cin >> array[i];
	}

	//Вывод на экран в прямом порядке
	for (int i : array)
	{
		cout << i << "\t";
	}
	cout << endl;

	//Вывод на экран в обратном порядке
	for (int i = 1; i <= size; i++)
	{
		cout << array[size - i] << "\t";
	}
	cout << endl;

	//Вычисление суммы элементов
	int sum = 0;
	for (int i : array)
	{
		sum += i;
	}
	cout << "Сумма элементов массива: " << sum << endl;

	//Среднее арифметическое
	cout << "Среднее арифметическое из элементов массива: " << sum / static_cast<double>(size) << endl;

	//Минимальное и максимальное значение
	int min = INT_MAX, max = INT_MIN;
	for (int i : array)
	{
		if (i < min) min = i;
		if (i > max) max = i;
	}
	cout << "Минимальное значение: " << min << ", максимальное значение: " << max << endl;
}