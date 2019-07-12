/* See on testimise peaprogramm. Töö algab funktsioonis 'main'. */
#include <iostream>     /* Sisend ja väljund */
#include <cstdlib>      /* EXIT_SUCCESS jt konstandid */
#include "functions.h"  /* Meie oma funktsioonid */

using namespace std; /* Nimeruumi valik (selgitatakse praktikumis) */

int testcount = 0;
#define TEST(ex) cout << "Test " << ++testcount << ". " << #ex << " " << ((ex) ? "OK" :"FAIL") << endl

int main() {
  cout << "--Testi funktsiooni minimum" << endl;
  // Kas funktsioon minimum on defineeritud?
  cout << "min (35, 40) = " << minimum (35, 40) << endl;
  // Testi funktsiooni minimum tulemusi
  TEST(minimum(35, 40) == 35);
  TEST(minimum(35, 40) != 40);
  
  cout << "--Testi funktsiooni maximum" << endl;
  // Kas funktsioon on defineeritud?
  cout << "max (35, 40) = " << maximum (35, 40) << endl;
  // Testi funktsiooni tulemusi
  TEST(maximum(35, 40) == 40);
  TEST(maximum(35, 40) != 35);

  cout << "--Testi funktsiooni product" << endl;
  // Kas funktsioon on defineeritud?
  cout << "product (3, 5) = " << product (3, 5) << endl;
  // Testi funktsiooni tulemusi
  TEST(product(3, 5) == 15);
  TEST(product(42, 2) == 84);

  cout << "--Testi funktsiooni power" << endl;
  // Kas funktsioon on defineeritud?
  cout << "power (42, 2) = " << power (42, 2) << endl;
  // Testi funktsiooni tulemusi
  TEST(power(42, 2) == 1764);
  TEST(power(42, 2) != 84);
  TEST(power(53, -2) == 0);

  cout << "--Testi funktsiooni gcd" << endl;
  // Kas funktsioon on defineeritud?
  cout << "gcd (42, 2) = " << gcd (42, 2) << endl;
  // Testi funktsiooni tulemusi
  TEST(gcd(42, 2) == 2);
  TEST(gcd(42, 2) != 0);
  

  cout << "Testide arv: " << testcount << endl; 
  return EXIT_SUCCESS;
}
