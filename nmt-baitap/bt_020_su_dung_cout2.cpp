#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int N;
  cin >> N;

  cout << setw(6) << setfill('0') << N << endl;
  cout << setw(6) << setfill('#') << N << endl;

  return 0;
}
