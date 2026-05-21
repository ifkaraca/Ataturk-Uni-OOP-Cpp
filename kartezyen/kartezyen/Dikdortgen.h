#ifndef DIKDORTGEN_H
#define DIKDORTGEN_H
#include "Nokta.h"

class Dikdortgen
{
public:
	Dikdortgen(Nokta, Nokta);
	Nokta GetSolUst();
	Nokta GetSagAlt();
	void SetSolUst(Nokta);
	void SetSagAlt(Nokta);
	void SetSolUstSagAlt(Nokta,Nokta);
	int Alan();
	bool IcindeMi(Nokta);
private:
	Nokta SolUst;
	Nokta SagAlt;
};
#endif // !DIKDORTGEN_H