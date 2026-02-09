#include <iostream>
using namespace std;

int main()
{
  int a = 0;
  int b = 0;
  int a_prefix;
  int b_postfix;

  a_prefix = ++a;  // 전위 연산 - a값을 증가시킨 후에 a_prefix 대입
  b_postfix = b++; // 후위 연산 - b값을 b_postfix에 대입 후 b값을 증가시킴

  cout << "a = " << a << ", " << "a_prefix = " << a_prefix << endl;
  cout << "b = " << b << ", " << "b_postfix = " << b_postfix << endl;

  return 0;
}