#ifndef MONOKAI_H_
#define MONOKAI_H_

#include <iostream>
#define AB(a, b) a[b]

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
}

int main(int argc, const char* argv[]) {
  somefunction(/* ... */);
  Class c1(/* ... */);
  Class c2 = new Class();

  std::cout << "Monokai++\n";
}

#endif
