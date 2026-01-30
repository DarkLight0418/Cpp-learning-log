#include <iostream>
// #include <string> // iostream 헤더에 포함됨

using namespace std; // std::cout, std::endl

int main()
{
  string string_value("Hello");
  cout << string_value << endl;
  string_value = "World";
  cout << string_value << endl;

  return 0;
}