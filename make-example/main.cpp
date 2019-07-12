// https://courses.cs.ut.ee/2019/cpp/spring/Main/Lab01guide

/* See on peaprogramm. Töö algab funktsioonis 'main'. */
 
#include <iostream>     /* Sisend ja väljund */
#include <cstdlib>      /* EXIT_SUCCESS konstant */
#include "functions.h"  /* Meie oma funktsioonid */
using namespace std;    /* Nimeruumi valik (selgitatakse praktikumis) */
 
int main(int argc, char *argv[]) {
  cout << "min (35, 40) = " << minimum (35, 40) << endl;
  return EXIT_SUCCESS;
}
