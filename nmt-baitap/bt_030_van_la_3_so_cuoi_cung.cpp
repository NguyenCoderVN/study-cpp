#include <cmath>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  long long N;
  cin >> N;

  int hdv = N % 10;
  int hch = (N / 10) % 10;
  int htr = (N / 100) % 10;
  int kq = (long long)pow(10, hdv) + (long long)pow(5, hch) +
           (long long)pow(3, htr);

  cout << kq << endl;

  return 0;
}
