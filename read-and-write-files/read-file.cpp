// http://eio.ee/KKK/Failid
// Faili esimesel real on vasaku alumise nurga X- ja Y-koordinaat,
// teisel real parema ülemise nurga X- ja Y-koordinaat. 
// Samal real olevad arvud on üksteisest eraldatud tühikuga.

#include <fstream>
#include <iostream>
using namespace std;

int main(void)
{
   ifstream sisf;                                           // failimuutuja
   int x1, y1, x2, y2;                              // tippude koordinaadid
   int pind;                                                     // pindala

   // loeme andmed
   sisf.open("ristkyl.txt");                      // avame faili lugemiseks
   sisf >> x1 >> y1;                                     // loeme kaks arvu
   sisf >> x2 >> y2;                                // loeme veel kaks arvu
   sisf.close();                                           // sulgeme faili

   // arvutame pindala
   pind = (x2 - x1) * (y2 - y1);

   // väljastame tulemuse
   cout << "Pindala on " << pind << endl;
   return 0;
}