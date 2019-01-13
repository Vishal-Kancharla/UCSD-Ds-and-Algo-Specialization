#include <iostream>

int get_change(int m) {
  int MinNumCoins[m+1];
  int coins[] = {1,3,4};
  MinNumCoins[0] = 0;
  int Numcoins;
  int i,j;
  for( i = 1;i < m+1;i++)
    {
        MinNumCoins[i] = 1000;
     for(j = 0;j < 3;j++)
      {
         if(i >= coins[j])
            {
            Numcoins = MinNumCoins[i - coins[j]] + 1;
            if(Numcoins < MinNumCoins[i])
              MinNumCoins[i] = Numcoins;
            }
       }
    }
  return MinNumCoins[m];
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
