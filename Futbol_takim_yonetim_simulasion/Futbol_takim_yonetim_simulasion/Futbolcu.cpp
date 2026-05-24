#include "Futbolcu.h"
#include <string>
#include <iostream>
using namespace std;

void Futbolcu::SetMevki(string mevk)
{
	Mevki = mevk;
}

string Futbolcu::GetMevki()
{
	return Mevki;
}

void Futbolcu::GetFutbolcu()
{
	cout << "Futbolcunun Adı: " << Ad << endl;
	cout << "Futbolcunun Kondisyonu: " << kondisyon << endl;
	cout << "Futbolcunun Mevkisi: " << Mevki << endl;
}