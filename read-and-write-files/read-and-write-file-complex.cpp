/*
Kirjutada programm, mis loeb andmed tekstifailist andmed.sis ja väljastab tulemuse tekstifaili andmed.val vastavalt järgnevale kirjeldusele:

sisendfaili esimesel real on täisarv K ja järgmisel K real igaühel üks täisarv; väljastada väljundfaili esimesele reale arv K ja nende K arvu summa;
sisendfaili järgmisel real on täisarv L ja selle järel L tühikutega eraldatud reaalarvu; väljastada väljundfaili teisele reale arv L ja nende L arvu summa täpsusega 3 kohta pärast koma;
sisendfaili järgmisel real on täisarv M ja selle järel M tühikutega eraldatud numbrit; väljastada väljundfaili kolmandale reale need M numbrit vahetult üksteise kõrvale;
sisendfaili järgmisel real on täisarv N ja selle järel N rida kujul
<kbd>X sõna1 sõna2 sõna3 ...</kbd>,
kus X on täisarv ja iga sõna ees on täpselt üks tühik; väljastada väljundfaili järgmisele reale komadega eraldatult need sõnad, mille pikkus on X (esimese sõna ees ja viimase järel koma olla ei tohi).
Võib eeldada, et ühegi sisendrea pikkus ei ületa 200 sümbolit.
*/

#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
using namespace std;

int main(void)
{
   ifstream sisf;
   ofstream valf;
   int n, i;
   int x1, s1;
   double x2, s2;
   int x;
   string s;
   stringstream ss;
   int i1, i2;
   int e;

   // avame failid
   sisf.open("andmed.sis");
   valf.open("andmed.val");

   // esimene plokk: täisarvude summa
   sisf >> n;
   s1 = 0;
   for (i = 0; i < n; ++i) {
      sisf >> x1;
      s1 += x1;
   }
   valf << n << " " << s1 << endl;

   // teine plokk: reaalarvude summa
   sisf >> n;
   s2 = 0;
   for (i = 0; i < n; ++i) {
      sisf >> x2;
      s2 += x2;
   }
   valf << n << " " << fixed << setprecision(3) << s2 << endl;

   // kolmas plokk: numbrite kuhjamine
   sisf >> n;
   for (i = 0; i < n; ++i) {
      sisf >> x;
      valf << x;
   }
   valf << endl;

   // neljas plokk: antud pikkusega sõnad
   sisf >> n;
   for (i = 0; i < n; ++i) {
      sisf >> x; getline(sisf, s);
      ss.clear(); ss << s; e = 1;
      while (ss >> s) {
         if (s.length() == x) {
            if (!e) {
               valf << ",";
            }
            valf << s;
            e = 0;
         }
      }
      valf << endl;
   }

   // sulgeme failid
   sisf.close();
   valf.close();
   return 0;
}