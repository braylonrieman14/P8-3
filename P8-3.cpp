/*
* File: P8-3.cpp
* Author : Braylon Rieman
* Date : 10 / 24 / 2024
*
* Description : Roman Numeral Converter
*
*/

#include <iostream>
#include <string>
using namespace std;

//function prototypes
int convertRomanToInt(string s);
int romanCharValue(char r);

int main(void)
{
	//variables
	string input;
	
	while (true)
	{
		cout << "Enter Roman number or Q to quit: ";
		cin >> input;

		if (input == "Q")
			break;

		cout << convertRomanToInt(input) << endl;
	}
	
	int value;
	value = convertRomanToInt("II");

	cout << " = " << value;
}

int romanCharValue(char r)
{
	int result = 0;
	switch (r)
	{
	case 'I':
		result = 1;
		break;
	case 'V':
		result = 5;
		break;
	case 'X':
		result = 10;
		break;
	case 'L':
		result = 50;
		break;
	case 'C':
		result = 100;
		break;
	case 'D':
		result = 500;
		break;
	case 'M':
		result = 1000;
		break;
	}
	return(result);
}

int convertRomanToInt(string s)
{
	int count = 0;
	int currentChar;
	int nextChar;

	for (int i = 0; i < s.length(); i++)
	{
		currentChar = romanCharValue(s[i]);
		nextChar = romanCharValue(s[i+1]);

		if (currentChar >= nextChar || s.length() == 1)
		{
			count += currentChar;
		}
		else
		{
			count += (nextChar - currentChar);
			i++;
		}
	}
	return(count);
}
