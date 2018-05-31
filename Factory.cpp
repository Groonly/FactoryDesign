#include "Factory.h"
#include "ClassA.h"


Factory::Factory()
{

}

std::shared_ptr<ITriggerStuff> Factory::CreateA(int i)
{
  return MakeTriggerStuff<A>(i);
}
  std::shared_ptr<ITriggerStuff> Factory::CreateB()
{

}
template<class T, class... TParams>
std::shared_ptr<ITriggerStuff> Factory::MakeTriggerStuff(TParams&&... params)
{
  return std::make_shared<TriggerDoStuff>(new T(std::forward<TParams>(params)...));
}
