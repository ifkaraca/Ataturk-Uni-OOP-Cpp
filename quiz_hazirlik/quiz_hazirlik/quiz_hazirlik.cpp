#include <iostream>
using namespace std;
#include "FutbolTakimi.h"
#include "KargoPaketi.h"

int main()
{
    //FutbolTakimi takim;
    //int macSayisi, atilan, yenilen;

    //cout << "Kac macin sonucunu gireceksiniz? ";
    //cin >> macSayisi; // Kullanıcı döngü sayısını burada belirliyor

    //for (int i = 0; i < macSayisi; i++) {
    //    cout << i + 1 << ". Macin sonucu (Atilan Yenilen): ";
    //    cin >> atilan >> yenilen;
    //    takim.macSonucuEkle(atilan, yenilen);
    //}

    //takim.istatistikleriYazdir();

    KargoPaketi kargo(3,4,5,5,2);

    kargo.etiketyazdir();

}
