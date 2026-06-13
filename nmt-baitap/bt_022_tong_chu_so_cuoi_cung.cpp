#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int a, b, c;
  cin >> a >> b >> c;

  int cca = a % 10;
  int ccb = b % 100;
  int ccc = c % 1000;

  cout << cca + ccb + ccc << endl;

  return 0;
}
