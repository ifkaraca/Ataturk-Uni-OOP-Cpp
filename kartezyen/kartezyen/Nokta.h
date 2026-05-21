#ifndef NOKTA_H
#define NOKTA_H



class Nokta
{
public:
	Nokta(int = 0, int = 0);
	int GetX();
	int GetY();
	void SetX(int);
	void SetY(int);
	void SetXY(int, int);
private:
	int x;
	int y;

};

#endif // !NOKTA_H
