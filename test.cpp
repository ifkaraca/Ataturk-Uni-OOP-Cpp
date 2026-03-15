#include <iostream>
#include <ctime>
#include <cstdlib>
#include <clocale>

using namespace std;

int main() {
   setlocale(LC_ALL, "Turkhis");

   int toplam=0;
   int basamak;


   srand(time(0));
   int x = rand()%9999+1;
   cout<<"Rastgele üretilen sayı: "<<x<<endl;
   
   while (x>0)
   {
        basamak=x%10;
        toplam += basamak;
        x /=10;
   }

   cout<<"Rastgele üretilen sayının basamakları toplamı: "<<toplam<<endl;



    return 0;
}
