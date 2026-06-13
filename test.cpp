#include <iostream>
#include <string>
#include <vector>

// ==========================================
// KẾT CẤU 1: LỚP (CLASS)
// ==========================================
class Calculator {
private:
  int memory; // Thuộc tính

public:
  // Constructor
  Calculator() { memory = 0; }

  // Hàm thành viên với nhiều tham số
  int add(int num1, int num2, bool show_log) {
    int result = num1 + num2;
    if (show_log) {
      std::cout << "Adding: " << num1 << " + " << num2 << std::endl;
    }
    return result;
  }

  void clearMemory() { memory = 0; }
};

// ==========================================
// KẾT CẤU 2: HÀM ĐỘC LẬP (STANDALONE FUNCTION)
// ==========================================
void printGreeting(const std::string &name, int repeatCount) {
  for (int i = 0; i < repeatCount; ++i) {
    std::cout << "Hello, " << name << "!" << std::endl;
  }
}

// ==========================================
// KẾT CẤU 3: HÀM MAIN
// ==========================================
int main(int argc, char *argv[]) {
  Calculator calc;

  // Gọi hàm truyền tham số
  int sum = calc.add(10, 25, true);

  printGreeting("Neovim User", 2);

  return 0;
}
