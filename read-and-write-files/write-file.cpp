// Tekstifailis kolmnurk.txton kolmnurga tippude X- ja Y-koordinaadid, iga tipu koordinaadid omaette real.
#include <fstream>
#include <cmath>
using namespace std;

int main(void)
{
   ifstream sisf;                            // failimuutuja sisendiks
   ofstream valf;                           // failimuutuja väljundiks
   double x1, y1, x2, y2, x3, y3;              // tippude koordinaadid
   double a, b, c;                                 // külgede pikkused
   double p, pind;

   // loeme andmed
   sisf.open("kolmnurk.txt");                // avame faili lugemiseks
   sisf >> x1 >> y1;                                // loeme kaks arvu
   sisf >> x2 >> y2;                           // loeme veel kaks arvu
   sisf >> x3 >> y3;                           // loeme veel kaks arvu
   sisf.close();                                      // sulgeme faili

   // arvutame pindala Heroni valemi järgi
   a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
   b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
   c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
   p = (a + b + c) / 2;
   pind = sqrt(p * (p - a) * (p - b) * (p - c));

   // väljastame tulemuse
   valf.open("kolmnurk.val");             // avame faili kirjutamiseks
   valf << pind << endl;                                 // väljastame
   valf.close();                                      // sulgeme faili
   return 0;
}