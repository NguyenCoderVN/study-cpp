#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  long long N;
  cin >> N;

  bool check = (N % 15) == 0;
  cout << boolalpha << check << endl;
  return 0;
}
