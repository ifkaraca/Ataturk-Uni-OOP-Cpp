#ifndef DIKDORTGENLERPRIZMASI_H
#define DIKDORTGENLERPRIZMASI_H
#include "Sekil.h"
class DikdortgenlerPrizmasi: public Sekil
{
public:
	int GetHacim();
	void SetYukseklik(int);
private:
	int yukseklik;

};

#endif