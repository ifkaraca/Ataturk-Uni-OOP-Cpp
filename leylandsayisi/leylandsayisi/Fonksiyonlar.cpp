#include "Fonksiyonlar.h"
#include <iostream>
#include <cmath>

using namespace std;

void Fonksiyonlar::Fonksiyon_1(int* ptr, int boyut)
{
	cout << "Dinamik dizinin icerigi" << endl;
	for (int i = 0; i < boyut; i++)
	{
		ptr[i] = rand();
		cout << *(ptr + i) << ' ';
	}
	cout << endl;
}

bool Fonksiyonlar::Fonksiyon_2(int sayi)
{
	long long leylandDegeri; // Taşmaları önlemek için long long kullanıldı

	// x ve y limitini 20 yerine daha makul bir seviyede tutmak daha güvenlidir
	// (Çünkü rand() max 32767 üretir, büyük sayılara zaten çıkılmaz)
	for (int y = 2; y <= 20; y++)
	{
		for (int x = y; x <= 20; x++)
		{
			leylandDegeri = (long long)pow((double)y, x) + (long long)pow((double)x, y);

			if (leylandDegeri == sayi)
			{
				return true;
			}
			if (leylandDegeri > sayi)
			{
				break; // Sadece x döngüsünü kırar, y bir sonraki değere geçer
			}
		}
	}
	// Dış döngü de bittikten SONRA hiçbir eşleşme bulunamadıysa false dönmeli:
	return false;
}

void Fonksiyonlar::Fonksiyon_3(int alt, int ust)
{
	cout << "Araliktaki Leyland Sayilari" << endl;
	for (int i = alt; i <= ust; i++)
	{
		if (Fonksiyon_2(i))
		{
			cout <<i<< " bir Leyland sayisidir." << endl;
		}
	}
}

void Fonksiyonlar::Fonksiyon_4(int* ptr, int boyut)
{
	cout << "Dinamik Dizideki Leyland Sayilari" << endl;
	for (int i = 0; i < boyut; i++)
	{
		if (Fonksiyon_2(ptr[i]))
		{
			cout << "Dizinin:" << i+1 << ". elemani" << "(" << *(ptr + i) << ") Leyland Sayisidir.\n";
		}
	}
}
