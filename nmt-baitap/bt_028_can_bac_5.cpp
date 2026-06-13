#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int N;
  cin >> N;

  cout << fixed << setprecision(2) << (double)pow(N, 1.0 / 5.0)
       << endl;

  return 0;
}
