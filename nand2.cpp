#include <iostream>
using namespace std;

char memory[1 << 29]; // 2^32 bits
bool get(int pos) {
  return memory[pos / 8] & (1 << (pos % 8));
}
void set(int pos, bool value) {
  memory[pos / 8] = memory[pos / 8] & ~(1 << (pos % 8)) | ((int)value << (pos % 8));
}

int a, b;
bool running = true;

bool nand(bool x, bool y) {
  return not (x and y);
}

int main() {
  while (running) {
    cin >> a >> b;
    set(b, nand(get(a), get(b)));
    running = not get(2); //halt
  }
  for (int i = 1; i < (1 << 29); i++) {
    if (memory[i]) {
      printf("%c", memory[i]);
    }
  }
  printf("\n");
  return 0;
}
