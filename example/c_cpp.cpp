#include <iostream>
#include <string>

#define ABC       1231312321
#define LONG_NAME 0x46436123

const std::string name = "123123213";
const double      PI   = 123123123132.1234564654262612121231564;
const int         AGE  = 5465456456452;

int testFunc(int a, int b, int c, int d) {
  int e = b;
  return e;
}

void print(std::string msg) { std::cout << msg << std::endl; }

int longlonglonglonglonglonglongFunction(int a, int b, int c, int d, int e,
                                         int f) {}

int main() {
  int         b       = 10;
  int*        a       = &b;
  std::string newName = "12312512512521412";

  switch (b) {
  case 1:
    print("1");
  case 2:
    print("2");
  case 3:
    print("3");
  case 125325435:
    print("5");
  }
  int aa = 12312;          // 테스트
  int bb = 123;            // 테스트2
  int cc = 12312421312321; // 테스트3
}