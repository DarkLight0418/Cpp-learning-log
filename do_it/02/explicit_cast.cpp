#include <iostream>
using namespace std;

int main()
{
  int int_a = 10;
  int int_b = 6;

  int int_avg = (int_a + int_b) / 2;
  float float_avg_1 = (int_a + int_b) / 2;
  float float_avg_2 = float(int_a + int_b) / 2;
  /*
    float_avg_1 : 그냥 사용한 곳(값이 달라짐), float_avg_2 : 명시적 형 변환 사용한 곳(값 유지)
  */

  cout << "int_avg: " << int_avg << endl;
  cout << "float_avg_1: " << float_avg_1 << endl;
  cout << "float_avg_2: " << float_avg_2 << endl;

  return 0;
}