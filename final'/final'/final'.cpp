// final'.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class vize26
{
public:
	void fonksiyon1(int* dizi, int boyut);
	void fonksiyon2(int* dizi, int boyut);
	bool fonksiyon3(int sayi);
};


void vize26::fonksiyon1(int* dizi, int boyut)
{
	srand(time(0));

	for (int i = 0; i < boyut; i++)
	{
		dizi[i] = rand() % 5000 + 10;
	}
}

bool vize26::fonksiyon3(int sayi)
{
	int toplam = 0;
	while (sayi > 0)
	{
		toplam += sayi % 10;
		sayi /= 10;
	}

	if (toplam == 5)
	{
		return true;
	}

	return false;
}

void vize26::fonksiyon2(int* dizi, int boyut)
{
	for (int i = 0; i < boyut; i++)
	{
		if (fonksiyon3(dizi[i]))
		{
			cout << dizi[i] << " sayisi mavi-beyaz sayisidir." << endl;
		}
	}
}

int main()
{
	int boyut = 90;
	int* dinamikdizi = new int[boyut];
	vize26* nesne = new vize26();

	(*nesne).fonksiyon1(dinamikdizi, boyut);
	(*nesne).fonksiyon2(dinamikdizi, boyut);
   
	delete[] dinamikdizi;
	delete nesne;
}