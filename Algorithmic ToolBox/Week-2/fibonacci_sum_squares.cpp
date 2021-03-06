#include <iostream>

int fibonacci_sum_squares_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current * current;
    }

    return sum % 10;
}
int fibonacci_sum_squares_fast(long long n){
        if(n<=1)
           return n;
       long long remainder = n % 60;

    long long first = 0;
    long long second = 1;
    long long res = remainder;
    for (int i = 1; i < remainder; i++) {
        res = (first + second) % 10;
        first = second;
        second = res;
        }

    return res%10;
}

int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << (fibonacci_sum_squares_fast(n)*fibonacci_sum_squares_fast(n+1))%10;
}
