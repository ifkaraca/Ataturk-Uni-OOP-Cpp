#ifndef SEKIL_H
#define SEKIL_H
class Sekil
{
public:
	Sekil();
	int GetEn();
	int GetBoy();
	void SetEn(int);
	void SetBoy(int);
	void SetEnBoy(int,int);
protected:
	int en;
	int boy;
};

#endif