#include <vector>
int f() { return 1; }

int main() {
  std::vector<int> vi(100);
  int &&r1 = f();
  int &r2 = vi[0];

  // remember the rvalue refercence is a lvalue;
  int &r3 = r1;
  int &&r4 = vi[0] * f();
  return 0;
}