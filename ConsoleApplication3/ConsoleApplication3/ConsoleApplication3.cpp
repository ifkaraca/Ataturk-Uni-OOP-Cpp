#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Final26
{
public:
    void f1(int* dizi, int boyut);
    void f2(int* dizi, int boyut);
    bool f3(int sayi);
};

void Final26::f1(int* dizi, int boyut)
{
    srand(time(0));

    for (int i = 0; i < boyut; i++)
    {
        dizi[i] = rand() % 51 + 50;
    }
}

bool Final26::f3(int sayi)
{
    int toplam = 0;
    while (sayi > 0)
    {
        toplam = sayi % 10;
        sayi /= 10;
    }

    if (toplam == 5)
    {
        return true;
    }
    return false;
}

void Final26::f2(int* dizi, int boyut)
{
    for (int i = 0; i < boyut; i++)
    {
        if (f3(dizi[i]))
        {
            cout << dizi[i] << " sayisi ejdarha sayisidir" << endl;
        }
    }
}

int main()
{
    int boyut = 60;
    int* dizi = new int[boyut];
    Final26* nesne = new Final26();

    nesne->f1(dizi, boyut);
    nesne->f2(dizi, boyut);

    delete[] dizi;
    delete nesne;

    return 0;
}
