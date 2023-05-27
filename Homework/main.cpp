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
	//3. ���� ������ �� 10 ���������, ����������� ���������� ������� � ��������� �� 0 �� 5. 
	//���������� ����� � ���� ������� ��������, ������� ����������� ������ ������ ����, ������� �� �� �����,
	//� ������� �� ����� ���������� ���������� ���� ��������.
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
				flag = true;	// ��� �������� ����������� �� ����� � ������� ������
				break;			// ����� �� �������� ���������� ������ � ������
			}
		}
		if (!flag && repeats_finder(arr, arr[i]) > 1)
		{
			cout << "����� " << arr[i] << " ����������� � ������� " << repeats_finder(arr, arr[i]) << " ����" << endl;
		}
	}
}