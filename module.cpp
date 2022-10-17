#include <stdlib.h>
#include <iostream>
#include <time.h>
#include "Krrab.h"
using namespace std;

int GetRandomNumber(int min, int max)
{
	// Установить генератор случайных чисел
	srand(time(NULL)) ;

	// Получить случайное число - формула
	int num = min + rand() % (max - min + 1);

	return num;
}

int gen ()
{
	srand(time(NULL));
	int num = GetRandomNumber(2,10);
	return num;
}

int Question(int num1, int num2)
{
	int proiz;
	cout << "\nСколько будет " << num1 << " * " << num2 << "?\n";
	cin >> proiz;
	return proiz;
}

bool Proverka(int sumcin,int sumprav)
{
	return (sumcin == sumprav);
}

float ball(bool otvet)
{
	if (otvet == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int mark(float sumball, int kolvo)
{
	if (sumball / kolvo * 100 < 40)
	{
		return 2;
	}
	if (sumball / kolvo * 100 >= 80)
	{
		return 5;
	}
	else
	{
		if (sumball / kolvo * 100 >= 60)
		{
			return 4;
		}
		else
		{
			if (sumball / kolvo * 100 >= 40)
			{
				return 3;
			}
		}
	}
}
