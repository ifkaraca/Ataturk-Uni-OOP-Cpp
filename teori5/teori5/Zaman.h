#ifndef ZAMAN_H

#define ZAMAN_H
class Zaman
{
public:
	Zaman();// Yapıcı Method
	void ZamanAyarla(int, int, int);
	void ZamanYazdir();
private:
	int saat;
	int dakika;
	int saniye;
};
#endif

