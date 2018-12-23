#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

long long max_dot_product(vector<int64_t> a, vector<int64_t> b, int64_t n) {
  // write your code here
  long long result = 0;
  std::sort(a.begin(),a.end());
  std::sort(b.begin(),b.end());
  for (size_t i = 0; i < n; i++) {
    result += ((long long) a[i]) * b[i];
  }
  return result;
}

int main() {
  int64_t n;
  std::cin >> n;
  vector<int64_t> a(n), b(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  for (size_t i = 0; i < n; i++) {
    std::cin >> b[i];
  }
  std::cout << max_dot_product(a, b, n) << std::endl;
}
