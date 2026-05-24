#include "klasik.h"
#include <iostream>
using namespace std;
klasik::klasik(int max) 
{
	kapasite = max;
	mevcut = 0;

	MusteriListesi = new Musteri[kapasite];
}

klasik::~klasik()
{
	delete[] MusteriListesi;
}

void klasik::MusteriEkle(const Musteri& yeniMuseteri)
{
	if (mevcut < kapasite)
	{
		MusteriListesi[mevcut] = yeniMuseteri;
		mevcut++;
	}
	else
	{
		cout << "Hata! Musteri Listesi Dolu." << endl;
	}
}

void klasik::searchMusteri(int no)
{
	for (int i = 0; i < mevcut; i++)
	{
		if (MusteriListesi[i].getHesapNo() == no)
		{
			MusteriListesi[i].getMusteri();
			break;
		}
	}
}