// Kirjutada programm, mis sisestab klaviatuurilt kahe tekstifaili nimed ja kopeerib esimesest failist teise kõik read, mille pikkus on paarisarv. Võib eeldada, et ei failinimede ega ühegi rea pikkus ei ületa 80 sümbolit.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(void)
{
   string sisnimi, valnimi;
   ifstream sisf;
   ofstream valf;
   string s;

   // loeme failinimed
   cout << "Sisendfaili nimi: "; cin >> sisnimi;
   cout << "Väljundfaili nimi: "; cin >> valnimi;

   // avame failid
   sisf.open(sisnimi.c_str());
   valf.open(valnimi.c_str());

   // kopeerime
   // NB! ei tööta: while (sisf >> s)
   while (getline(sisf, s)) {
      if (s.length() % 2 == 0) {
         valf << s << endl;
      }
   }

   // sulgeme failid
   sisf.close();
   valf.close();
   return 0;
}