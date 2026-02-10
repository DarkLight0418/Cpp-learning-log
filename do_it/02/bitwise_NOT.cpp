#include <iostream>
using namespace std;

int main()
{
  unsigned int value = 0x00000000;

  value = ~value;
  cout << hex << value << endl;
  // hex : cout의 출력 방식 설정 (16진수로 표시, 한번 설정되면 유지됨)

  // 결과 0xffffffff (0x는 자동으로 붙지 않음)
  return 0;
}