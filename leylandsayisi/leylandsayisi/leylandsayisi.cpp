#include <iostream>
#include "Fonksiyonlar.h"
#include <cstdlib> 
#include <ctime>
using namespace std;
int main()
{
    srand((unsigned)time(0));
    int boyut, altLimit, ustLimit, * diziPtr;
    Fonksiyonlar* nesnePtr1 = new Fonksiyonlar;
    Fonksiyonlar* nesnePtr2 = new Fonksiyonlar;
    cout << "Lutfen Boyutu, Alt ve Ust Limitleri Giriniz:";
    cin >> boyut >> altLimit >> ustLimit;
    diziPtr = new int[boyut];
    nesnePtr1->Fonksiyon_1(diziPtr, boyut);
    (*nesnePtr2).Fonksiyon_3(altLimit, ustLimit);
    nesnePtr1->Fonksiyon_4(diziPtr, boyut);
    delete[] diziPtr;
    delete nesnePtr1;
    delete nesnePtr2;
    return 0;
}