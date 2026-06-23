// final.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
class final25
{
public:
    void fonksiyon1(int* dizi, int boyut);
    void fonksiyon2(int* dizi, int boyut);
    bool fonksiyon3(int sayi);
};

void final25::fonksiyon1(int* dizi, int boyut)
{
    srand(time(0));

    for (int i = 0; i < boyut; i++)
    {
        dizi[i] = rand() % 5000 + 10;
    }
}

void final25::fonksiyon2(int* dizi, int boyut)
{
    for (int i = 0; i < boyut; i++)
    {
        if (fonksiyon3(dizi[i]))
        {
            cout << dizi[i] << " Sayisi Erzurum sayisidir." << endl;
        }
    }
}

bool final25::fonksiyon3(int sayi) {
    if (sayi < 0) {
        sayi = -sayi;
    }

    
    while (sayi > 0)
    {
        int sag = sayi % 10;
        sayi /= 10;

        if (sayi == 0) {
            break;
        }

        int sol = sayi % 10;

        if (sol >= sag)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int boyut = 90;

    int* dinamikdizi = new int[boyut];
    final25* nesne = new final25();
    (*nesne).fonksiyon1(dinamikdizi, boyut);
    (*nesne).fonksiyon2(dinamikdizi, boyut);

    delete[] dinamikdizi;
    delete nesne;
}

