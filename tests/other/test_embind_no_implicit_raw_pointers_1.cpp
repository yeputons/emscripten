#include <emscripten/bind.h>
#include <emscripten/val.h>
int main() {
  int x = 0;
  emscripten::val::global("foo")(&x); // int*
}
