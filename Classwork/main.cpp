#include <iostream>
#include <vector>
using namespace std;

void to_binary(int decimal)
{
	vector<int> vec;
	while (decimal >= 2)
	{
		vec.insert(vec.begin(), decimal % 2);
		decimal /= 2;
	}
	vec.insert(vec.begin(), decimal);
	for (auto i : vec)
	{
		cout << i;
	}
	cout << endl;
}

void main()
{
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите число в десятичной системе счисления: "; cin >> decimal;
	cout << "В двоичной системе это число: "; to_binary(decimal);
	cout << "В шестнадцатиричной системе счисления это число: " << hex << decimal;
}