// Tekstifailis kolmnurk.txton kolmnurga tippude X- ja Y-koordinaadid, iga tipu koordinaadid omaette real.
#include <stdio.h>
#include <math.h>

int main(void)
{
   FILE *sisf, *valf;                                   /* failimuutujad */
   double x1, y1, x2, y2, x3, y3;                /* tippude koordinaadid */
   double a, b, c;                                   /* külgede pikkused */
   double p, pind;

   /* loeme andmed */
   sisf = fopen("kolmnurk.txt", "rt");         /* avame faili lugemiseks */
   fscanf(sisf, "%lf %lf", &x1, &y1);                 /* loeme kaks arvu */
   fscanf(sisf, "%lf %lf", &x2, &y2);            /* loeme veel kaks arvu */
   fscanf(sisf, "%lf %lf", &x3, &y3);            /* loeme veel kaks arvu */
   fclose(sisf);                                        /* sulgeme faili */

   /* arvutame pindala Heroni valemi järgi */
   a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
   b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
   c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
   p = (a + b + c) / 2;
   pind = sqrt(p * (p - a) * (p - b) * (p - c));

   /* väljastame tulemuse */
   valf = fopen("kolmnurk.val", "wt");      /* avame faili kirjutamiseks */
   fprintf(valf, "%lf", pind);                           /* väljastame */
   fclose(valf);                                        /* sulgeme faili */
   return 0;
}