﻿// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <cstdlib>
#include <cmath>
#include <iostream>
using namespace std;
int getLen(char str[]) { 
	int len = 0; 
	for (int i = 0; str[i]; i++) len++; 
	return len; 
}

int getInt(char str[]) {
	int count = 0;
	for (int i = 0; i < str[i]; i++)
	{
		if (str[i] >= '0' && str[i] <= '9') count++;
		
	}
	return count;
}
int getSumNumber(char str[]) {
  int sum = 0;
  for (int i = getLen(str); i >= 0; i--) {

    if (str[i] >= '0' && str[i] <= '9') {
      int a = 1;
      sum += str[i] - '0';
      for (int b = i; b >= 0; b--) {
        if (str[b - 1] >= '0' && str[b - 1] <= '9') {
          sum += (str[b - 1] - '0') * pow(10, a++);
          continue;
        } else {
          i = b - 1;
          break;
        };
      }
    }
  }
  return sum;
}
int getNumbers(char str[]) {
	int count = 0;
	for (int i = 0; i < str[i]; i++)
	{
		if (str[i] >= '0' && str[i] <= '9') {
			for (int b = i; b < str[i]; b++)
			{
				if (str[b + 1] >= '0' && str[b + 1] <= '9') {
					continue;
				}
				else {
					i = b + 1;
					count++;
					break;
				};
			}
		}
	}
	return count;
}
int getIntSum(char str[])
{
	int sum = 0;
	for (int i = 0; i < str[i]; i++)
	{
		if (str[i] >= '0' && str[i] <= '9') sum += str[i] - '0';

	}
	return sum;
}


void IncInt(char str[], int s=1)
{
	int add = ('1' - '0');
	for (int i = 0; i < str[i]; i++)
	{
		if (str[i] >= '0' && str[i] <= '9') {
			if (str[i] == '9') str[i] = '0';
			str[i] = str[i] + s;
		}
	}
}

int main()
{	
	char str[100];
	cout << "Enter a string: " << endl;
	cin.getline(str, 100); 
	cout << "digit count: " << getInt(str) << endl;
	cout << "digit sum: " << getIntSum(str) << endl;
	IncInt(str);
	cout << "Inc Str: " << str << endl;
	cout << "Number count: " << getNumbers(str) << endl;
	cout << "Number sum: " << getSumNumber(str) << endl;
	system("pause");
 }
