#include <iostream>

int get_change(int m) {

if(m>=1&&m<5)
    return m;
if(m==5||m==10)
    return 1;
if(m>5&&m<10)
    return (m%5)+1;
else
{
   int c=m/10;
   int d=m%10;
 if(d>=0&&d<5)
    return c+d;
 if(d==5)
    return 1+c;
 if(d>5&&d<10)
    return (d%5)+1+c;
}


}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
