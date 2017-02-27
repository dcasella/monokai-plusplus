#ifndef MONOKAIPP_H
#define MONOKAIPP_H

#include <iostream>
#define INSPECT_LIFE(a, b) a[b]

struct struct_t {
  int[] a;
  sometype_t* b;
  // float c;
};

template <typename T>
class Class : public OtherClass {
  struct_t st;
  T foo;
  
public:
  cl(struct_t* st = 0, const T& foo) : st(st) {
    this->foo = foo;
  }
   // <- caret
  
  /* ... */
}

int main(int argc, const char* argv[]) {
  somefunction(/* ... */);
  Class elem(/* ... */);
  std::cout << "Monokai++" << std::endl;
}

#endif
