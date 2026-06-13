#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  long long N;
  cin >> N;

  bool check = ((int)(N % 3) == 0) || ((int)(N % 5) == 0) ||
               ((int)(N % 11) == 0);
  cout << boolalpha << check << endl;

  return 0;
}
