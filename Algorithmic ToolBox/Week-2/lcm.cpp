#include <iostream>

int gcd_fast(int64_t a, int64_t b) {
  if(b>a)
std::swap(a,b);
  if(b==0)
    return a;
  if(a==0)
    return b;
  return gcd_fast(b,a%b);
}

int main() {
  int64_t a, b;
  std::cin >> a >> b;
  std::cout << (a*b)/gcd_fast(a, b) << std::endl;
  return 0;
}
