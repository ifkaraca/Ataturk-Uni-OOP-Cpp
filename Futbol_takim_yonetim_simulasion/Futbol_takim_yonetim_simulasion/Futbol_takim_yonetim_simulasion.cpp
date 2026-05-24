
#include <iostream>
#include <clocale>
#include "Takim.h"
#include "Futbolcu.h"
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");
    int kapasite;
    cout << "Oluşturulacak takımın kontenjanını giriniz: ";
    cin >> kapasite;

    Takim* Erzurumspor = new Takim(kapasite);

    for (int i = 0; i < kapasite; i++)
    {
        string isim, mevki;
        int kondisyon;

        cout << endl << i + 1 << ". Futbolcunun Adı: ";
        cin >> isim;

        cout << "Kondisyonu (0-100): ";
        cin >> kondisyon;

        cout << "Mevkisi: ";
        cin >> mevki;

        Futbolcu geciciFutbolcu;
        geciciFutbolcu.SetSporcu(isim, kondisyon);
        geciciFutbolcu.SetMevki(mevki);

        (*Erzurumspor).FutbolcuEkle(geciciFutbolcu);
    }


    Erzurumspor->TakimBilgisiYazdir();

    delete Erzurumspor;

    cout << "\nProgram başarıyla sonlandırıldı. Bellek iade edildi." << endl;

    return 0;
}
