// teori1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	short int sayi1, sayi2, sayi3,enBuyuk;
	cout << "Lütfen birinci sayıyı giriniz: ";
	cin >> sayi1;
	cout << "Lütfen ikinci sayıyı giriniz: ";
	cin >> sayi2;
	cout << "Lütfen üçüncü sayıyı giriniz: ";
	cin >> sayi3;

	enBuyuk = sayi1;

	if (sayi2 > enBuyuk)
	{
		enBuyuk = sayi2;
	}
	if (sayi3 > enBuyuk)
	{
		enBuyuk = sayi3;
	}
	cout << "En büyük sayı: " << enBuyuk << endl;
	return 0;
}
