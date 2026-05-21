#include "DikdortgenlerPrizmasi.h"
void DikdortgenlerPrizmasi::SetYukseklik(int pY)
{
	yukseklik = pY;
}
int DikdortgenlerPrizmasi::GetHacim()
{
	return en * boy * yukseklik;
}