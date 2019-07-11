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

#include <stdio.h>
#include <string.h>

int main(void)
{
   FILE *sisf, *valf;
   int n, i;
   int x1, s1;
   double x2, s2;
   int x;
   char s[200 + 1 + 1];
   int i1, i2;
   int e;

   /* avame failid */
   sisf = fopen("andmed.sis", "rt");
   valf = fopen("andmed.val", "wt");

   /* esimene plokk: täisarvude summa */
   fscanf(sisf, "%d", &n);
   s1 = 0;
   for (i = 0; i < n; ++i) {
      fscanf(sisf, "%d", &x1);
      s1 += x1;
   }
   fprintf(valf, "%d %dn", n, s1);

   /* teine plokk: reaalarvude summa */
   fscanf(sisf, "%d", &n);
   s2 = 0;
   for (i = 0; i < n; ++i) {
      fscanf(sisf, "%lf", &x2);
      s2 += x2;
   }
   fprintf(valf, "%d %0.3lfn", n, s2);

   /* kolmas plokk: numbrite kuhjamine */
   fscanf(sisf, "%d", &n);
   for (i = 0; i < n; ++i) {
      fscanf(sisf, "%d", &x);
      fprintf(valf, "%d", x);
   }
   fprintf(valf, "n");

   /* neljas plokk: antud pikkusega sõnad */
   fscanf(sisf, "%d", &n);
   for (i = 0; i < n; ++i) {
      fscanf(sisf, "%d", &x); fgets(s, sizeof(s), sisf);
      e = 1; i1 = 0; s[strlen(s) - 1] = ' ';
      for (i2 = 1; s[i2] != 0; ++i2) {
         if (s[i2] == ' ') {
            if (i2 - i1 == x + 1) {
               if (!e) {
                  fprintf(valf, ",");
               }
               s[i2] = 0;
               fprintf(valf, "%s", s + i1 + 1);
               e = 0;
            }
            i1 = i2;
         }
      }
      fprintf(valf, "n");
   }

   /* sulgeme failid */
   fclose(sisf);
   fclose(valf);
   return 0;
}