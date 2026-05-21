#include "Nokta.h"
Nokta::Nokta(int pX,int pY)
{
	x = pX;
	y = pY;
}

int Nokta::GetY()
{
	return y;
}
int Nokta::GetX()
{
	return x;
}
void Nokta::SetX(int pX)
{
	x = pX;
}
void Nokta::SetY(int pY)
{
	y = pY;
}
void Nokta::SetXY(int pX, int pY)
{
	x = pX;
	y = pY;
}