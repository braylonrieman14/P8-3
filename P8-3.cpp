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
int romanCharValue(char r);

int main(void)
{
	int value;
	value = romanCharValue('I');

	cout << " = " << value;//hello
}

int romanCharValue(char r)
{
	int count = 0;

	switch (r)
	{
	case 'I':
		count += 1;
		break;
	case 'V':
		count += 5;
		break;
	case 'X':
		count += 10;
		break;
	case 'L':
		count += 50;
		break;
	case 'C':
		count += 100;
		break;
	case 'D':
		count += 500;
		break;
	case 'M':
		count += 1000;
		break;
	}

	return(count);
}
