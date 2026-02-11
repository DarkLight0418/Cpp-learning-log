#include <iostream>
#include <bitset>

int main()
{
  int a = 13;
  int b = 27;
  int c = a & b; // 비트 AND

  std::cout << "a = " << std::bitset<8>(a) << " : " << a << std::endl;
  std::cout << "b = " << std::bitset<8>(b) << " : " << b << std::endl;
  std::cout << "c = " << std::bitset<8>(c) << " : " << c << std::endl;

  return 0;
}