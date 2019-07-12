// https://courses.cs.ut.ee/2019/cpp/spring/Main/Lab01guide
/* See funktsioon tagastab kahest sisendist väiksema.
   CPP failis on funktsiooni töötav kood. */
#include "functions.h"  /* Kui mõni funktsioon kasutab teist, peab teise */
                        /* deklaratsioon sellele eelnema. */
long minimum (long a, long b) {
  if (a > b) return b;
  else return a;
}
