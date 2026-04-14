#ifndef KARGOPAKETI_H
#define KARGOPEKETI_H



class KargoPaketi
{
public:
	KargoPaketi(int en, int boy, int yukseklik,int agirlik,int kargoTipi);
	void ebatGuncelle(int en, int boy, int yukseklik);
	void etiketyazdir();
private:
	int en, boy, yukseklik, agirlik, kargoTipi, desi;
	void desiHesapla();
	double ucretHesapla();

};
#endif // !KARGOPAKETI_H