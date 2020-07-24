#include "binary.h"
#include <string>

static inline bool is_binary_digit(int ch) { return ch == '0' || ch == '1'; }

unsigned binary::convert(const std::string& binary) {
  unsigned decimal{0};

  for (auto digit : binary) {
    if (!is_binary_digit(digit)) return 0;
    decimal <<= 1;
    decimal |= digit - '0';
  }

  return decimal;
}