#include "Factory.h"
#include "ITriggerStuff.h"
#include "memory"

int main()
{
  Factory f;
  std::shared_ptr<ITriggerStuff> i;
  i = f.CreateA(3);
  i->Run();
  return 0;
}
