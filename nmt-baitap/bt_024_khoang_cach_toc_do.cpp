#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int x, y;
  cin >> x >> y;

  long long x2 = pow(x, 2);
  long long y2 = pow(y, 2);
  double can2 = (double)sqrt(x2 + y2);

  cout << fixed << setprecision(2) << can2 << endl;

  return 0;
}
