// Kirjutada programm, mis sisestab klaviatuurilt kahe tekstifaili nimed ja kopeerib esimesest failist teise kõik read, mille pikkus on paarisarv. Võib eeldada, et ei failinimede ega ühegi rea pikkus ei ületa 80 sümbolit.
#include <stdio.h>
#include <string.h>

int main(void)
{
   char sisnimi[80 + 1], valnimi[80 + 1];
   FILE *sisf, *valf;
   char s[80 + 1 + 1];

   /* loeme failinimed */
   printf("Sisendfaili nimi: "); scanf("%80s", sisnimi);
   printf("Väljundfaili nimi: "); scanf("%80s", valnimi);

   /* avame failid */
   sisf = fopen(sisnimi, "rt");
   valf = fopen(valnimi, "wt");

   /* kopeerime */
   /* NB! ei tööta: while (fscanf(sisf, "%80s", s)) */
   while (fgets(s, sizeof(s), sisf) != NULL) {
      if (strlen(s) % 2 == 1) {               /* reavahetus on ka sümbol */
         fputs(s, valf);
      }
   }

   /* sulgeme failid */
   fclose(sisf);
   fclose(valf);
   return 0;
}
