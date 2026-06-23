#include "final26.h"
#include <cstdlib>
#include <iostream>
#include <ctime>


void final26::rastgeledizidoldur(int* dizi, int boyut)
{
	srand(time(0));
	for (int i = 0; i < boyut; i++)
	{
		dizi[i] = rand() % 1451 + 50;
	}
}

bool final26::ucbasamaklimi(int sayi)
{
	int toplam = 0;
	while (sayi > 0)
	{
		sayi /= 10;
		toplam++;
	}

	if (toplam == 3)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool final26::tamamiucbasamaklimi(int* dizi, int boyut)
{
	for (int i = 0; i < boyut; i++)
	{
		if (!ucbasamaklimi(dizi[i]))
		{
			return false;
			break;
		}
		else
		{
			return true;
		}
	}
}

void final26::sirala(int* dizi, int boyut)
{
	for (int i = 0; i < boyut; i++)
	{
		for (int j = 1; j < boyut - 1; j++)
		{
			if (dizi[j] < dizi[i])
			{
				int degisken = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = degisken;
			}

		}
	}
}