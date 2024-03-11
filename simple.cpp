#include "elapse.h"
#include <vector>

void kerokero1(){
  ELAPSE  elapse(__func__);
  std::vector<int> vec = {1,2,3,4,5};
}

int main(){
  ELAPSE elapse;
  kerokero1();
}
