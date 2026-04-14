#include "KargoPaketi.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

KargoPaketi::KargoPaketi(int e,int b,int y,int a,int kt)
{
	en = (e < 1) ? 1 : e;
	boy = (b < 1) ? 1 : b;
	yukseklik = (y < 1) ? 1 : y;
	agirlik = a;
	kargoTipi = (kt == 1 || kt == 2 || kt == 3) ? kt : 1;
}

void KargoPaketi::ebatGuncelle(int x, int y, int z)
{
	en = x;
	boy = y;
	yukseklik = z;
}

void KargoPaketi::desiHesapla()
{
	desi = (en * boy * yukseklik) / 3000.0;
}

double KargoPaketi::ucretHesapla()
{
	
	if (agirlik > desi)
	{
		double ucret = (agirlik * 20.0);
		if (kargoTipi == 1)
		{
			return ucret;
		}
		else if (kargoTipi == 2)
		{
			return ucret + (ucret * (20 / 100));
		}
		else
		{
			return ucret + (ucret * (50 / 100));
		}
	}
	else
	{
		double ucret = (desi * 20.0);
		if (kargoTipi == 1)
		{
			return ucret;
		}
		else if (kargoTipi == 2)
		{
			return ucret + (ucret * (20 / 100));
		}
		else
		{
			return ucret + (ucret * (50 / 100));
		}
	}
}

void KargoPaketi::etiketyazdir()
{
	cout << "=================================\n";
	cout << "       KARGO PAKET ETIKETI       \n";
	cout << "=================================\n";

	// Değişkenleri aralarına 'x' koyarak yazdırıyoruz
	cout << "Ebatlar (ExBxY) : " << en << "x" << boy << "x" << yukseklik << " cm\n";
	cout << "Agirlik         : " << agirlik << " kg\n";
	cout << "Hesaplanan Desi : " << desi << "\n";

	// Kargo tipini sadece sayı olarak değil, metin olarak da belirtmek şık durur
	cout << "Kargo Tipi      : ";
	if (kargoTipi == 1) cout << "Standart\n";
	else if (kargoTipi == 2) cout << "Hizli\n";
	else if (kargoTipi == 3) cout << "VIP\n";

	cout << "---------------------------------\n";

	// İŞTE KRİTİK NOKTA: ucretHesapla() private fonksiyonunu burada çağırıyoruz
	cout << "TOPLAM UCRET    : " << ucretHesapla() << " TL\n";
	cout << "=================================\n";
}