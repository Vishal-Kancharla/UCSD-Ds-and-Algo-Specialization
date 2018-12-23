#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
#include<string.h>
using std::vector;
using std::string;

string largest_number(char a[1000]) {
  int n = strlen(a);
  int l =  n;
  int j=0;
  char b[n];
  while(n>0){
    char maxDigit = 0;
      for(int i =0;i < n;i++)
      {
         if(strcmp(maxDigit,a[i])>0)
            maxDigit = a[i];
      }
      b[j] = maxDigit;
      j++;
      n--;
  }
  std::stringstream ret;
  for (size_t i = 0; i < l; i++) {
    ret << a[i];
  }
  string result;
  ret >> result;
  return result;
}

int main() {
  int n;
  std::cin >> n;
  char a[n];
  for (size_t i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  std::cout << largest_number(a);
}
