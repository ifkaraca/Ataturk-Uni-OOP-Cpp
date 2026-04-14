#ifndef FUTBOLTAKIMI_H
#define FUTBOLTAKIMI_H


class FutbolTakimi
{
public:
	FutbolTakimi();
	void macSonucuEkle(int atilan, int yenilen);
	void istatistikleriYazdir();

private:

	int galibiyet, beraberlik, maglubiyet, atilanGol, yenilenGol;
	int averajHesapla();
	int puanHesapla();

};

#endif

