#include <iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n]{};
	for (int i = 0; i < 10; i++)
	{
		bool unique;
		do {
			arr[i] = rand() % 10;
			unique = true;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
		cout << arr[i] << tab;
	}
}