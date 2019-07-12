/**@file
 * @author Tauno Erik
 */
#include <fstream>
#include <iostream>     /* Sisend ja väljund */
#include <cstdlib>      /* EXIT_SUCCESS jt konstandid */
#include <cstring>      /* strcmp funktsioon */
#include "functions.h"  /* Meie oma funktsioonid */
using namespace std;    /* Nimeruumi valik */

int main(int argc, char *argv[]) {
  long a = 0; /* Teisenda tekst arvuks */
  long b = 0;
  
  if (argc != 2 && argc != 3 && argc != 4) {                                        /* Kontrollime, kas on programm + 2 parameetrit */
   cerr << "Viga: vale arv käsureaparameetreid!" << endl;
   return EXIT_FAILURE;
  }


  /* kui program midagi.txt */
  if (argc == 2) {
    ifstream sisf;
    const char *name = argv[1];
    sisf.open(name);                      // avame faili lugemiseks
    if (!sisf) {
        cerr << "Viga: ei saa avada faili!";
        return EXIT_FAILURE;
    }
    sisf >> a >> b;                                     // loeme kaks arvu
    sisf.close();                                       // sulgeme faili

    all(a, b);
  }
  /* kui program 1 2 */
  else if (argc == 3) {
    a = atol (argv[1]); /* Teisenda tekst arvuks */
    b = atol (argv[2]);

    all(a, b);
  }
  /* kui program 1 2 liida */
  else {
    a = atol (argv[1]); /* Teisenda tekst arvuks */
    b = atol (argv[2]);

    if (strcmp (argv[3], "minimum") == 0) {
      cout << a << " " << b << "\n" << minimum (a, b) << endl;
    }
    else if (strcmp (argv[3], "maximum") == 0) {
      cout << a << " " << b << "\n" << maximum (a, b) << endl;
    }
    else if (strcmp (argv[3], "power") == 0) {
      cout << a << " " << b << "\n" << power (a, b) << endl;
    }
    else if (strcmp (argv[3], "gcd") == 0) {
      cout << a << " " << b << "\n" << gcd (a, b) << endl;
    }
    else {
      cerr << "Viga: pole lubatud tehe." << endl;
      return EXIT_FAILURE;
    }

  }

  return EXIT_SUCCESS;
}
