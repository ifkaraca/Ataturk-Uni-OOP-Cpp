#include "Takim.h"
#include <iostream>

using namespace std;

// Yapıcı (Constructor): Dinamik Bellek Ayırma
Takim::Takim(int kapasite) 
{
    maxKapasite = kapasite;
    mevcutOyuncuSayisi = 0;

    // Lecture 8: 'new' operatörü ile çalışma anında bellek ayırma
    // Takım kapasitesi kadar Futbolcu nesnesi için yer rezerve edilir
    futbolcular = new Futbolcu[maxKapasite];
}

// Yıkıcı (Destructor): Dinamik Belleği İade Etme
Takim::~Takim() 
{
    // Lecture 8: 'delete []' kullanarak dinamik diziyi bellekten temizleme
    // Bellek sızıntısını (memory leak) önlemek için kritiktir
    delete[] futbolcular;
}

// Futbolcu Ekleme: Kompozisyon ve Atama
void Takim::FutbolcuEkle(const Futbolcu& yeniFutbolcu) {
    if (mevcutOyuncuSayisi < maxKapasite) {
        // Lecture 6: Nesne atama işlemi gerçekleştirilir
        // futbolcular dizisinin mevcut indisine yeni futbolcu kopyalanır
        futbolcular[mevcutOyuncuSayisi] = yeniFutbolcu;
            mevcutOyuncuSayisi++;
    }
    else {
        cout << "Hata: Takim kadrosu dolu!" << endl;
    }
}

// Bilgileri Yazdır: Üye Fonksiyon Kullanımı
void Takim::TakimBilgisiYazdir() {
    cout << "\n--- TAKIM KADROSU ---" << endl;
    for (int i = 0; i < mevcutOyuncuSayisi; i++) {
        cout << i + 1 << ". ";
        // Lecture 8: Dizideki nesnenin public üye fonksiyonuna erişim
        futbolcular[i].GetFutbolcu(); 
    }
}