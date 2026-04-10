#ifndef MATEMATIKSEL_H
#define MATEMATIKSEL_H

class Matematiksel
{
public:
	Matematiksel(int, int);//Yapıcı

	void EkokuYazdir();
	void EbobuYazdir();
private:
	int sayi1;
	int sayi2;

	int EkokuHesapla();
	int EbobuHesapla();
};

#endif // !MATEMATİKSEL_H
