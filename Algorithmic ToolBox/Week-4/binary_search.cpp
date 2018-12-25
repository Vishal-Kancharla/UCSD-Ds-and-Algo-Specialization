#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

int binary_search(const vector<int> &a, int left, int right, int x) {
  if (right < left)
     return -1;
  int mid = left + (right - left)/2;
  if(a[mid] == x)
    return mid;
  if (a[mid] > x)
    return binary_search(a,left,mid-1,x);
  else
    return binary_search(a,mid+1,right,x);
}

int linear_search(const vector<int> &a, int x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
        int left = 0;
        int right = a.size()-1 ;
    //replace with the call to binary_search when implemented
    std::cout << binary_search(a,left,right, b[i]) << ' ';
  }
}
