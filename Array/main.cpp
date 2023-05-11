#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int size = 5;
	int array[size];

	//������ �������� ��������� �������
	for (int i = 0; i < size; i++)
	{
		cout << "������� " << i + 1 << "-� ������� �������: "; cin >> array[i];
	}

	//����� �� ����� � ������ �������
	for (int i : array)
	{
		cout << i << "\t";
	}
	cout << endl;

	//����� �� ����� � �������� �������
	for (int i = 1; i <= size; i++)
	{
		cout << array[size - i] << "\t";
	}
	cout << endl;

	//���������� ����� ���������
	int sum = 0;
	for (int i : array)
	{
		sum += i;
	}
	cout << "����� ��������� �������: " << sum << endl;

	//������� ��������������
	cout << "������� �������������� �� ��������� �������: " << sum / static_cast<double>(size) << endl;

	//����������� � ������������ ��������
	int min = INT_MAX, max = INT_MIN;
	for (int i : array)
	{
		if (i < min) min = i;
		if (i > max) max = i;
	}
	cout << "����������� ��������: " << min << ", ������������ ��������: " << max << endl;
}