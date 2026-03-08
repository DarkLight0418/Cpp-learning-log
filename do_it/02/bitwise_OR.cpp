#include <iostream>
#include <bitset>

int main()
{
  int a = 13;
  int b = 27;
  int c = a | b; // 비트 OR

  std::cout << "a = " << std::bitset<8>(a) << " : " << a << std::endl; // 13
  std::cout << "b = " << std::bitset<8>(b) << " : " << b << std::endl; // 27
  std::cout << "c = " << std::bitset<8>(c) << " : " << c << std::endl; // 31

  return 0;
}