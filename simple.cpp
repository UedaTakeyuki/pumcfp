#include "elapse.h"
#include <vector>

void kerokero1(){
  ELAPSE  elapse(__func__);
  std::vector<int> vec = 
{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
  std::vector<int> vec2(vec);
}

int main(){
  ELAPSE elapse;
  kerokero1();
}
