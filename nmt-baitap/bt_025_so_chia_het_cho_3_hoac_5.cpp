#include <iostream>

using namespace std;

int main() {
  long long N;
  cin >> N;

  long long count3 = N / 3;
  long long count5 = N / 5;
  long long count15 = N / 15;

  long long total = count3 + count5 - count15;

  cout << total << "\n";

  return 0;
}
