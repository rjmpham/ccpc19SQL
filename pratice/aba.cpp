#include <iostream>
#include <algorithm>

int main(){
  int n;
  std::cin >> n;
  for (int i = 0; i < n-1; i++) {
    std::cout << i+1 << " Abracadabra" << std::endl;
  }

  std::cout << n << " Abracadabra";
  return 0;
}
