#include "modern.h"
void modern::musteriEkle(const Musteri& m)
{
	int anahtar = const_cast<Musteri&>(m).getHesapNo();
	veritabani[anahtar] = m;
}

void modern::searchMusteri(int no)
{
    auto it = veritabani.find(no);

    if (it != veritabani.end())
    {
        it->second.getMusteri();
    }
    else
    {
        cout << "Hata: " << no << " numarali musteri kayitlarda bulunamadi!" << endl;
    }
}