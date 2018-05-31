#include "CommonInterface.h"

class A : public CommonInterface
{

private:
  int a;

public:
  A(int i);
  void DoStuff() override;

};
