#include "TriggerDoStuff.h"
#include <memory>


class Factory {

private:
  template<class T, class... TParams>
  std::shared_ptr<ITriggerStuff> MakeTriggerStuff(TParams&&... params);

public:
  Factory();

  std::shared_ptr<ITriggerStuff> CreateA(int i);

  std::shared_ptr<ITriggerStuff> CreateB();


};
