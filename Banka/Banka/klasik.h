#ifndef KLASIK_H
#define KLASIK_H
#include "Musteri.h"

class klasik
{
public:
	klasik(int kapasite);
	~klasik();

	void MusteriEkle(const Musteri& m);
	void searchMusteri(int);
private:
	int kapasite;
	int mevcut;
	Musteri* MusteriListesi;
};

#endif // !KLASIK_H