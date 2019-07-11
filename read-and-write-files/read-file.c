// http://eio.ee/KKK/Failid
// Faili esimesel real on vasaku alumise nurga X- ja Y-koordinaat,
// teisel real parema ülemise nurga X- ja Y-koordinaat. 
// Samal real olevad arvud on üksteisest eraldatud tühikuga.

#include <stdio.h>

int main(void)
{
   FILE *sisf;                                           /* failimuutuja */
   int x1, y1, x2, y2;                           /* tippude koordinaadid */
   int pind;                                                  /* pindala */

   /* loeme andmed */
   sisf = fopen("ristkyl.txt", "rt");          /* avame faili lugemiseks */
   fscanf(sisf, "%d %d", &x1, &y1);                   /* loeme kaks arvu */
   fscanf(sisf, "%d %d", &x2, &y2);              /* loeme veel kaks arvu */
   fclose(sisf);                                        /* sulgeme faili */

   /* arvutame pindala */
   pind = (x2 - x1) * (y2 - y1);

   /* väljastame tulemuse */
   printf("Pindala on %d \n", pind);
   return 0;
}