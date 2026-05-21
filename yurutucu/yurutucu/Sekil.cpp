#include "Sekil.h"
Sekil::Sekil()
{
	en = 0;
	boy = 0;
}
int Sekil::GetBoy()
{
	return boy;
}
int Sekil::GetEn()
{
	return en;
}
void Sekil::SetBoy(int pB)
{
	boy = pB;
}
void Sekil::SetEn(int pE)
{
	en = pE;
}
void Sekil::SetEnBoy(int pB, int pE)
{
	boy = pB;
	en = pE;
}