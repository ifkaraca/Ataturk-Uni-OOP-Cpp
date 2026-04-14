#include "FutbolTakimi.h"
#include <iostream>
#include <iomanip>
using namespace std;

FutbolTakimi::FutbolTakimi()
{
	galibiyet = maglubiyet = atilanGol = yenilenGol = beraberlik = 0;
}

void FutbolTakimi::macSonucuEkle(int aGol ,int yGol)
{
	atilanGol += aGol;
	yenilenGol += yGol;

	if (aGol > yGol)
	{
		galibiyet++;
	}
	else if (aGol==yGol)
	{
		beraberlik++;
	}
	else
	{
		maglubiyet++;
	}
}

int FutbolTakimi::averajHesapla()
{
	return atilanGol - yenilenGol;
}

int FutbolTakimi::puanHesapla()
{
	return (galibiyet * 3) + beraberlik;
}

void FutbolTakimi::istatistikleriYazdir()
{
	cout << "G" << setw(5) << "B" << setw(5) << "M" << setw(5) << "AG" << setw(5) << "YG" << setw(5) << "AV" << setw(5) << "P" << endl;
	cout << galibiyet << setw(5) << beraberlik << setw(5) << maglubiyet << setw(5) << atilanGol << setw(5) << yenilenGol << setw(5) << averajHesapla() << setw(5) << puanHesapla() << endl;
}