#include "Dikdortgen.h"
#include <cmath>

Dikdortgen::Dikdortgen(Nokta sU, Nokta sA)
{
	SolUst = sU;
	SagAlt = sA;
}

Nokta Dikdortgen::GetSolUst()
{
	return SolUst;
}
Nokta Dikdortgen::GetSagAlt()
{
	return SagAlt;
}

void Dikdortgen::SetSolUst(Nokta sU)
{
	SolUst = sU;
}
void Dikdortgen::SetSagAlt(Nokta sA)
{
	SagAlt = sA;
}
void Dikdortgen::SetSolUstSagAlt(Nokta sU, Nokta sA)
{
	SolUst = sU;
	SagAlt = sA;
}
int Dikdortgen::Alan()
{
	int kenar1 = (int)fabs((double)(SolUst.GetX()) - (SagAlt.GetX()));
	int kenar2 = (int)fabs((double)(SolUst.GetY()) - (SagAlt.GetY()));
	return kenar1 * kenar2;
}
bool Dikdortgen::IcindeMi(Nokta n)
{
	bool kosul1 = (n.GetX()) > (SolUst.GetX()) && (n.GetX() < SagAlt.GetX());
	bool kosul2 = (n.GetY()) > (SolUst.GetY()) && (n.GetY() < SagAlt.GetY());

	return kosul1 && kosul2;
}