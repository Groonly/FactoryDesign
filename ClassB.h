#include "CommonInterface.h"

class B : public CommonInterface
{

private:
  int b, c, d;

public:
  B(int i, int j, int k);
  void DoStuff() override;

};
