#include <iostream>
#include <string>
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

void to_hexadecimal(int decimal)
{
	vector<char> vec;
	int i = 0;
	for (; decimal; decimal /= 16, i++)
	{
		vec.push_back(decimal % 16);
		vec[i] += vec[i] < 10 ? 48 : 55;
	}
	for (i--;i >=0;i--)
	{
		cout << vec[i];
	}
	cout << endl;
}

void main()
{
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите число в десятичной системе счисления: "; cin >> decimal;
	cout << "В двоичной системе это число: "; to_binary(decimal);
	cout << "В шестнадцатиричной системе это число: "; to_hexadecimal(decimal); // << std::hex << decimal;
}