#include "CommonInterface.h"
#include "ITriggerStuff.h"
#include "memory"

class TriggerDoStuff :public ITriggerStuff{
private:
std::unique_ptr<CommonInterface> common;

public:
TriggerDoStuff(CommonInterface *c);
void Run() override;

};
