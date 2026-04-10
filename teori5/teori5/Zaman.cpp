#include "Zaman.h"
#include <iostream>
#include <iomanip>
using namespace std;
Zaman::Zaman()
{
	saat = dakika = saniye = 0;
}
void Zaman::ZamanAyarla(int h, int m, int s)
{
	saat = (h >= 0 && h < 24) ? h : 0;
	dakika = (m >= 0 && m < 60) ? m : 0;
	saniye = (s >= 0 && s < 60) ? s : 0;
}
void Zaman::ZamanYazdir()
{
	cout << setfill('0') << setw(2) << saat << ":" << setw(2) << dakika << ":" << setw(2) << saniye << endl;
}