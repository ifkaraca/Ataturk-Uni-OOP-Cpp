#include "Kisi.h"
#include <iostream>
using namespace std;
void Kisi::setKisi(string isim, string soyisim)
{
	ad = isim;
	soyad = soyisim;
}

void Kisi::getKisi()
{
	cout << "Ad: " << ad << endl;
	cout << "Soyad: " << soyad << endl;
}