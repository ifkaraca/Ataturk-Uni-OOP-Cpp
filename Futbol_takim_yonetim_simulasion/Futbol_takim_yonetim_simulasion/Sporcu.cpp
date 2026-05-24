#include "Sporcu.h"
#include <string>
#include <iostream>
using namespace std;

Sporcu::Sporcu()
{
	Ad = "xx";
	kondisyon = 0;
}
void Sporcu::SetSporcu(string isim, int kond)
{
	Ad = isim;
	kondisyon = kond;
}

void Sporcu::GetSporcu()
{
	cout << "Sporcu Adı: " << Ad << endl;
	cout << "Kondisyonu: " << kondisyon << endl;
}