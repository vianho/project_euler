#include <iostream>
using namespace std;

/*
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
*/

int main ()
{
  int limit = 1000;
  // sum of arithmetic progression with a=3, d=3, and n=1000-1/3
  int term3 = (limit - 1) / 3;
  float sn3 = ((float) term3 / 2.0f) * (3 + 3 * term3);
  // sum of arithmetic progression with a=5, d=5, and n=1000-1/5
  int term5 = (limit - 1) / 5;
  float sn5 = ((float) term5 / 2.0f) * (5 + 5 * term5);
  // sum of arithmetic progression with a=15, d=15, and n=1000-1/15
  int term15 = (limit - 1) / 15;
  float sn15 = ((float) term15 / 2.0f) * (15 + 15 * term15);
  // sum 3 & 5 series, and subtract the overlaps
  int sum = (int) sn3 + (int) sn5 - (int) sn15;
  cout << "The sum of all multiples of 3 & 5 below 1000 is " << sum << endl;
  return 0;
}
