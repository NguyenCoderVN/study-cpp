#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  long long N;
  cin >> N;

  cout << (long long)N / 500000 << endl;
  cout << N % 500000 << endl;

  return 0;
}
