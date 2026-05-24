#ifndef MUSTERI_H
#define MUSTERI_H
#include "Kisi.h"

class Musteri: public Kisi
{
private:
	int hesapNo;
	double bakiye;
public:
	void setMusteri(int, double);
	int getHesapNo();
	void getMusteri();
};

#endif // !MUSTERI_H
