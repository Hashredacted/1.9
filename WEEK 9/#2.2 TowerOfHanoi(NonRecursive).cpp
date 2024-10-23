#include <iostream>
#include <cmath>
using namespace std;

void toh_nonrecursive(int n, char source, char aux, char destination) {
   int total_moves = pow(2, n) - 1;
   for (int move = 1; move <= total_moves; ++move) {
      if (move % 3 == 1) {
         cout << "Move disk from " << source << " to " << destination << endl;
      } else if (move % 3 == 2) {
         cout << "Move disk from " << source << " to " << aux << endl;
      } else {
         cout << "Move disk from " << aux<< " to " << destination << endl;
      }
   }
}
int main() {
   cout << "Tower of Hanoi Non-recursive.\n";
   toh_nonrecursive(3,'A','B', 'C');
   return 0;
}
