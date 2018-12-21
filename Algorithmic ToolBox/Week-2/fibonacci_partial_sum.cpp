#include <iostream>
#include<cmath>


long long get_fibonacci_partial_sum(long long m,long long n) {
    int periods[] = {0,1,1,2,3,5,8,3,1,4,5,9,4,3,7,0,7,7,4,1,5,6,1,7,8,5,3,8,1,9,0,9,9,8,7,5,2,7,9,6,5,1,6,7,3,0,3,3,6,9,5,4,9,3,2,5,7,2,9,1};
    long long total = 0;
    m = m % 60;
    n = n % 60;
    if(m == n)
        {
            total = periods[m];
            return total;
        }
    for(int i = m; i <= n; i++  )
    {
        total = total + periods[i];
    }
    return total%10;
}

int main() {

    long long m,n;
    std::cin >> m>>n;
    std::cout <<get_fibonacci_partial_sum(m,n) << '\n';
}
