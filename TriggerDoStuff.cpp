#include "TriggerDoStuff.h"

TriggerDoStuff::TriggerDoStuff(CommonInterface *c) : common(c)
{
  //empty
}


void TriggerDoStuff::Run()
{
    common->DoStuff();
}
