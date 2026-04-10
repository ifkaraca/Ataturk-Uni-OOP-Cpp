#include "Matematiksel.h"
#include <iostream>
#include <cmath>

using namespace std;
Matematiksel::Matematiksel(int s1, int s2) {
	sayi1 = s1;
	sayi2 = s2;
}
void Matematiksel::EkokuYazdir()
{
	int ekok = EkokuHesapla();
	cout << sayi1 << " ile " << sayi2 << "nin ekoku: " << ekok << endl;
}
int Matematiksel::EkokuHesapla()
{
	int maksimum = (int)max((double)sayi1, (double)sayi2);
	int i = maksimum;
	for (; i <= sayi1 * sayi2; i++)
	{
		if ((i % sayi1) == 0 && (i % sayi2) == 0)
		{
			break;
		}

	}
	return i;
}
void Matematiksel::EbobuYazdir()
{
	int ebob = EbobuHesapla();
	cout << sayi1 << " ile " << sayi2 << " nin ebobu: " << ebob << endl;
}
int Matematiksel::EbobuHesapla()
{
	int minimum = (int)min((double)sayi1, (double)sayi2);
	int i = minimum;
	for (; i >= 1; i--)
	{
		if ((sayi1 % i) == 0 && (sayi2 % i) == 0)
		{
			break;
		}
	}
	return i;
}