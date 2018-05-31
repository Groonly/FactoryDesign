#include "ClassB.h"
#include "iostream"

B::B(int i, int j, int k) : b(i), c(j), d(k)
{
  //empty
}

void B::DoStuff()
{
  std::cout << "ClassA" << b << c << d <<  std::endl;

}
