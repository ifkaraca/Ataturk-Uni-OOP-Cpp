#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;


class targaryen {
public:
	void fonksiyon1(int* dizi, int boyut);
	void fonksiyon2(int* dizi, int boyut);
	bool fonksiyon3(int sayi);
};

void targaryen::fonksiyon1(int* dizi, int boyut)
{
	srand(time(0));

	for (int i = 0; i < boyut; i++)
	{
		dizi[i] = rand() % 5000 + 10;
	}
}

bool targaryen::fonksiyon3(int sayi)
{
	if (sayi < 0)
	{
		sayi = abs(sayi);
	}

	int toplam = 0;
	while (sayi > 0)
	{
		toplam += sayi % 10;
		sayi /= 10;
	}

	if (toplam == 3)
	{
		return true;
	}
	return false;
}

void targaryen::fonksiyon2(int* dizi, int boyut)
{
	for (int i = 0; i < boyut; i++)
	{
		if (fonksiyon3(dizi[i]))
		{
			cout << dizi[i] << " sayisi ejderha sayisidir." << endl;
		}
	}
}

int main()
{
	int boyut = 1000;
	int* dinamikdizi = new int[boyut];
	targaryen* ejdahra = new targaryen();

	ejdahra->fonksiyon1(dinamikdizi, boyut);
	ejdahra->fonksiyon2(dinamikdizi, boyut);

	delete[] dinamikdizi;
	delete ejdahra;
}
