#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int rows = 3, columns = 5;
	int first_array[rows][columns];
	int second_array[rows][columns];
	int result_array[rows][columns];

	cout << "Первая матрица" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			first_array[i][j] = rand() % 100;
			cout << first_array[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	cout << "Вторая матрица" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			second_array[i][j] = rand() % 100;
			cout << second_array[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	cout << "Сложение" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			result_array[i][j] = first_array[i][j] + second_array[i][j];
			cout << result_array[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	cout << "Вычитание" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			result_array[i][j] = first_array[i][j] - second_array[i][j];
			cout << result_array[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	//Для умножения нужно чтобы количество столбцов в одной
	//матрице совпадало с количеством строк в другой
	int second_array_for_multiplie[columns][rows];
	cout << "Вторая матрица для умножения" << endl;
	for (int i = 0; i < columns; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			second_array_for_multiplie[i][j] = rand() % 100;
			cout << second_array_for_multiplie[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	//Результатом умножения матрицы 3x5 на 5x3 будет матрица размером 3x3
	int mult[rows][rows]{};
	cout << "Умножение" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			for (int k = 0; k < columns; k++)
			{
				mult[i][j] += first_array[i][k] * second_array_for_multiplie[k][j];
			}
			cout << mult[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	//Определитель матрицы
	// [ a, b, c ]
	// [ d, e, f ]
	// [ g, h, i ]
	//det(A) = a*e*i + b*f*g + c*d*h - c*e*g - a*f*h - b*d*i
}