#include <iostream>



long long get_fibonacci_huge(long long n) {
    long long remainder = n % 60;

    long long first = 0;
    long long second = 1;
    long long sum ;
    if(remainder == 0)
        sum=0;
    else
        sum = 1;

    long long res = remainder;

    for (int i = 1; i < remainder; i++) {
        res = (first + second) % 10;
        first = second;
        second = res;
        sum = sum + res;
    }

    return sum%10;
}

int main() {

    long long n;
    std::cin >> n ;
    std::cout << get_fibonacci_huge(n) << '\n';
}
