#include "ClassA.h"
#include "iostream"

A::A(int i) : a(i)
{
  //empty
}

void A::DoStuff()
{
  std::cout << "ClassA" << a << std::endl;

}
