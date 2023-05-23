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
	string str;
	while (decimal >= 16)
	{
		int remain = decimal % 16;
		if (remain >= 10)
		{
			if (remain == 10) str += "a";
			if (remain == 11) str += "b";
			if (remain == 12) str += "c";
			if (remain == 13) str += "d";
			if (remain == 14) str += "e";
			if (remain == 15) str += "f";
		}
		else
		{
			str += to_string(remain);
		}
		decimal /= 16;
	}
	if (decimal >= 10)
	{
		if (decimal == 10) str += "a";
		if (decimal == 11) str += "b";
		if (decimal == 12) str += "c";
		if (decimal == 13) str += "d";
		if (decimal == 14) str += "e";
		if (decimal == 15) str += "f";
	}
	else
	{
		str += to_string(decimal);
	}
	for (int i = str.length() - 1; i >= 0; i--)
	{
		cout << str[i];
	}
}

void main()
{
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите число в десятичной системе счисления: "; cin >> decimal;
	cout << "В двоичной системе это число: "; to_binary(decimal);
	cout << "В шестнадцатиричной системе это число: "; to_hexadecimal(decimal); // << std::hex << decimal;
}