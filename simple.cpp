#include "elapse.h"

void kerokero1(){
  auto prefix = std::string(__FILE__) + ":" + std::to_string(__LINE__) + ":" +__func__;
  ELAPSE  elapse(prefix);
}

void kerokero2(){
  auto prefix = std::string(__FILE__) + ":" + std::to_string(__LINE__) + ":" +__func__;
  ELAPSE  elapse(prefix);
}

int main(){
  ELAPSE elapse;
  {
    auto prefix = std::string(__FILE__) + ":" + std::to_string(__LINE__) + ":" +__func__;
    ELAPSE  elapse(prefix);
  }
  kerokero1();
  {
    auto prefix = std::string(__FILE__) + ":" + std::to_string(__LINE__) + ":" +__func__;
    ELAPSE elapse(prefix);
  }
  kerokero2();
  {
    auto prefix = std::string(__FILE__) + ":" + std::to_string(__LINE__) + ":" +__func__;
    ELAPSE elapse(prefix);
  }
  return 1;
}
