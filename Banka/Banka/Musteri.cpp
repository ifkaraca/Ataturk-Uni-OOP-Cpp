#include "Musteri.h"
#include <iostream>
using namespace std;
void Musteri::getMusteri()
{
	cout << "Ad: " << ad << endl;
	cout << "Soyad: " << soyad << endl;
	cout << "Hesap No: " << hesapNo << endl;
	cout << "Bakiye: " << bakiye << endl;
	
}

void Musteri::setMusteri(int no, double para)
{
	hesapNo = no;
	bakiye = para;
}

int Musteri::getHesapNo()
{
	return hesapNo;
}