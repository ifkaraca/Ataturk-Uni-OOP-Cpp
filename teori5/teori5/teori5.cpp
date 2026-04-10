#include <iostream>
#include <clocale>
#include "Zaman.h"
#include "Matematiksel.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");
    Zaman z;
   

   /* cout << "Başlangıç Değeri" << endl;
    z.ZamanYazdir();
    z.ZamanAyarla(8, 10, 2);
    cout << "Ayarlandıktan Sonraki Değeri" << endl;
    z.ZamanYazdir();*/

    int sayi1, sayi2;
    cout << "İki tam sayı giriniz";
    cin >> sayi1 >> sayi2;
    Matematiksel islem(sayi1, sayi2);
    islem.EbobuYazdir();
    islem.EkokuYazdir();

    return 0;
}

