#include "Asker.h"
#include <string>
#include <iostream>
using namespace std;

void Asker::GetAsker()
{
	cout << "Turu: " << tur << endl;
	cout << "Gucu: " << guc << endl;
	cout << "Rutbesi: " << rutbe << endl;
}

void Asker::SetRutbe(string rtb)
{
	rutbe = rtb;
}