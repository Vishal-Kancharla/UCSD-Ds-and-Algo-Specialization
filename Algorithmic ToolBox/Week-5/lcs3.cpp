#include <iostream>
#include <vector>

using std::vector;

int lcs3(vector<int> &a, vector<int> &b, vector<int> &c,int an,int bn,int cn) {
     int64_t i,j,k;
     int64_t LCS[an+1][bn+1][cn+1];
     for(i = 0;i <= an; i++)
     {
         for(j= 0;j<=bn;j++)
         {
             for(k=0;k<=cn;k++)
             {
                 if(i == 0||j == 0||k == 0)
                    LCS[i][j][k] = 0;
                else if (a[i-1] == b[j-1]&&b[j-1] == c[k-1])
                    LCS[i][j][k] = LCS[i-1][j-1][k-1] + 1;
                else
                    LCS[i][j][k] = std::max(std::max(LCS[i-1][j][k],
                                         LCS[i][j-1][k]),
                                     LCS[i][j][k-1]);
             }
         }
     }
     return LCS[an][bn][cn];
}

int main() {
  size_t an;
  std::cin >> an;
  vector<int> a(an);
  for (size_t i = 0; i < an; i++) {
    std::cin >> a[i];
  }
  size_t bn;
  std::cin >> bn;
  vector<int> b(bn);
  for (size_t i = 0; i < bn; i++) {
    std::cin >> b[i];
  }
  size_t cn;
  std::cin >> cn;
  vector<int> c(cn);
  for (size_t i = 0; i < cn; i++) {
    std::cin >> c[i];
  }
  std::cout << lcs3(a, b, c,an,bn,cn) << std::endl;
}
