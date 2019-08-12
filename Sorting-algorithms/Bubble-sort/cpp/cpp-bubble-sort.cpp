/*
 *	@date 	12.08.2019
 *	@author	Tauno Erik
 */
#include <iostream>
#include <time.h>


int arry_size = 0;
int numbers[] = { 8, 1, 5, 2, 4, 0, 3, 7, 9, 6, 99, 55, 44, 21, 12,
34, 5, 68, 19, 71, 70, 82, 65, 41, 72, 11, 36, 18, 27, 14, 15, 13 };


void print_array(int numbers[], int arry_size) {
  for (int i = 0; i < arry_size; i++) {
    std::cout << numbers[i] << " ";
    if (i == arry_size - 1) {
      std::cout << '\n';
    }
  }
}


void bubble_sort(int numbers[], int numbers_size) {
    int n, i;
    for (n = numbers_size - 1; n > 0; n--) {
        for (i = 1; i <= n; i++) {
            int left = numbers[i - 1];
            int right = numbers[i];
            if (left > right) {
                numbers[i - 1] = right;
                numbers[i] = left;
            }
        }
    }
}


int main () {
clock_t execution_time;
  execution_time = clock();

  arry_size = sizeof(numbers)/sizeof(numbers[0]);

  std::cout << "Before: ";
  print_array(numbers, arry_size);
  bubble_sort(numbers, arry_size);
  std::cout << "After: ";
  print_array(numbers, arry_size);

  execution_time = clock() - execution_time;

  std::cout << "Processor time:" << execution_time 
            << "clicks (" << ((float)execution_time) / CLOCKS_PER_SEC
            << " sec.)" << '\n';
  return 0;
}
