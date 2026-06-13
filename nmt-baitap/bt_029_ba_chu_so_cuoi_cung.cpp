#include <algorithm>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  long long N;
  cin >> N;

  int hdv = N % 10;
  int hch = (N / 10) % 10;
  int htr = (N / 100) % 10;

  cout << max({hdv, htr, hch}) << endl;

  return 0;
}
