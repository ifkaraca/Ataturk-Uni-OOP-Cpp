#ifndef TAKIM_H
#define TAKIM_H
#include "Futbolcu.h"

class Takim
{
public:
    // Yapıcı fonksiyon: Takım kapasitesini parametre olarak alır
    Takim(int kapasite);

    // Yıkıcı fonksiyon: Dinamik ayrılan belleği temizlemek için kritik!
    ~Takim();

    // Futbolcu ekleme fonksiyonu (Referans veya Pointer ile)
    void FutbolcuEkle(const Futbolcu& yeniFutbolcu);

    // Takım bilgilerini ve kadroyu yazdıran yardımcı fonksiyon
    void TakimBilgisiYazdir();

private:
    Futbolcu* futbolcular; // Dinamik dizi için pointer (Lecture 8'deki mantık)
    int maxKapasite;       // Takımın alabileceği max oyuncu sayısı
    int mevcutOyuncuSayisi; // Şu an kadroda kaç kişi var?
};

#endif // !TAKIM_H