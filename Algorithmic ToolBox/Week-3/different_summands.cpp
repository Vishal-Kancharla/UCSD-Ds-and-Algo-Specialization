#include <iostream>
#include <vector>

using std::vector;

vector<int> optimal_summands(int64_t n) {
  vector<int> summands;
  int64_t i=1;
  while(n>0)
  { if(n > 2*i)
    {
        n = n - i;
        summands.push_back(i);
    }
    else
    {
        summands.push_back(n);
        n = n - n;
    }
      i++;
  }
  //write your code here
  return summands;
}

int main() {
  int64_t n;
  std::cin >> n;
  vector<int> summands = optimal_summands(n);
  std::cout << summands.size() << '\n';
  for (size_t i = 0; i < summands.size(); ++i) {
    std::cout << summands[i] << ' ';
  }
}
